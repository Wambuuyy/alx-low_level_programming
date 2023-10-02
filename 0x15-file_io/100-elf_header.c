#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_elf_info(const Elf64_Ehdr *header);
void close_elf(int elf);

/**
 * print_elf_info - Prints information from the ELF header.
 * @header: A pointer to an Elf64_Ehdr structure.
 */
void print_elf_info(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x%s", header->e_ident[i], (i == EI_NIDENT - 1) ? "\n" : " ");
	}
	printf(" Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32
			? "ELF32" : "ELF64");
	printf(" Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian" : "2's complement, big endian");
	printf(" Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf(" OS/ABI: ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
	printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf(" Type: ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_type);
	}
	printf(" Entry point address: ");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		unsigned long e_entry = header->e_entry;

		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
		if (header->e_ident[EI_CLASS] == ELFCLASS32)
			printf("%#x\n", (unsigned int)e_entry);
		else
			printf("%#lx\n", e_entry);
	}
	else
	{
		if (header->e_ident[EI_CLASS] == ELFCLASS32)
			printf("%#x\n", (unsigned int)header->e_entry);
		else
			printf("%#lx\n", header->e_entry);
	}
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close_elf(fd);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0
			|| header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close_elf(fd);
		return (98);
	}
	print_elf_info(&header);
	close_elf(fd);
	return (0);
}
