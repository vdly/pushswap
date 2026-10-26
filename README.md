*This project has been created as part of the 42 curriculum by JODEHII & YTEE.*

# push_swap

### Description

`push_swap` is a project exploring algorithms by sorting a stack of integers in acending order using two stacks by only using a restricted set of self coded operations.

In this project, three different complexities must be implemented:
* Simple Algorithm `O(n^2)`
* Medium Algorithm `O(n√n)`
* Complex Algorithm `O(n log n)`

Disorder is a number between 0 and 1 that tells how far your initial stack is from being sorted. If the numbers are already sorted, the disorder is 0, if the number are in the worst possible order, the disorder is 1.

A custom Adaptive Algorithm that selects different internal methods depending on measures disorder must also implemented.

#### Allowed Operations

| Operation | Definition |
| --- | ---|
| `sa` | swap the first 2 elements at the top of stack `a` |
| `sb` | swap the first 2 elements at the top of stack `b` |
| `ss` | `sa` and `sb` at the same time |
| `pa` | push the top of `b` onto `a` |
| `pb` | push the top of `a` onto `b` |
| `ra` | rotate `a` up (first element becomes last) |
| `rb` | rotate `b` up |
| `rr` | `ra` and `rb` at the same time |
| `rra` | Reverse rotate `a` (last element becomes first) |
| `rrb` | Reverse rotate `b` |
| `rrr` | `rra` and `rrb` at the same time |



### Instructions

#### To create `./push_swap`, run:

* `make`
* `make all` 

#### To remove all object files/program, run:

* `make clean`
* `make fclean`

#### To remake object files and library, run:

* `make re`

### Algorithms 

#### Selection Sort *(Simple Algorithm `O(n^2)`)*

Selection Sort is a comparison-based sorting algorithm that works by repeatedly finding the minimum element from the unsorted portion of an array and swapping it with the first unsorted element.

#### Chunk Sort *(Medium Algorithm `O(n√n)`)*

Chunksort is a generalized partial sort that rearranges an array so that specific intervals (chunks) and the gaps between them are sorted in increasing order.

#### Radix Sort *(Complex Algorithm `O(n log n)`)*

Radix sort is a non-comparative integer sorting algorithm that processes digits from least significant to most significant (LSD). 


### Resources

* https://www.geeksforgeeks.org/c/c-program-for-selection-sort/
* https://www.geeksforgeeks.org/cpp/cpp-bitwise-operators/
* https://www.w3schools.com/c/c_bitwise_operators.php
* https://www.geeksforgeeks.org/c/c-program-for-radix-sort/
* https://www.programiz.com/dsa/radix-sort
* https://www.desmos.com/calculator/pqjldgfele