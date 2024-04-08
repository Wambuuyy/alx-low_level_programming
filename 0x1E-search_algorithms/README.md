
```markdown
# Search Algorithms

This repository contains C programs implementing various search algorithms, including linear search, binary search, jump search, interpolation search, exponential search, and more.

## Contents

1. [Description](#description)
2. [Requirements](#requirements)
3. [How to Use](#how-to-use)
4. [Examples](#examples)
5. [Files](#files)
6. [Authors](#authors)

## Description

In this repository, you'll find implementations of several search algorithms in the C programming language. These algorithms are designed to efficiently search for a specific value within an array or a linked list.

The implemented algorithms include:
- Linear search
- Binary search
- Jump search
- Interpolation search
- Exponential search
- Advanced binary search
- Jump search in a singly linked list
- Linear search in a skip list

## Requirements

To compile and run the programs in this repository, you'll need:
- GCC compiler
- Ubuntu 20.04 LTS (or similar Linux distribution)

## How to Use

1. Clone this repository to your local machine.
2. Navigate to the directory containing the desired search algorithm implementation.
3. Compile the C files using GCC:
    ```bash
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c algorithm.c -o program_name
    ```
4. Run the compiled program:
    ```bash
    ./program_name
    ```

## Examples

Here are some examples of how to use the programs:

```bash
# Example of using the linear search program
$ ./linear_search
Found 5 at index: 3

# Example of using the binary search program
$ ./binary_search
Found 8 at index: 7

# Example of using the jump search program
$ ./jump_search
Found 12 at index: 6

# Example of using the interpolation search program
$ ./interpolation_search
Found 23 at index: 10

# Example of using the exponential search program
$ ./exponential_search
Found 76 at index: 14

# Example of using the advanced binary search program
$ ./advanced_binary_search
Found 99 at index: 15

# Example of using the jump search in a singly linked list program
$ ./jump_search_singly_linked_list
Found 53 at index: 11

# Example of using the linear search in a skip list program
$ ./linear_search_skip_list
Found 76 at index: 14
```

## Files

- `main.c`: Contains the main function for testing the search algorithm.
- `algorithm.c`: Contains the implementation of the specific search algorithm.
- `search_algos.h`: Header file containing function prototypes and necessary data structures.

## Authors

This repository was created by Prudence Wambui.

