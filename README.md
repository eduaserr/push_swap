<div>
    <img align="left" alt="push_swap" src="https://github.com/eduaserr/42-project-badges/blob/a48e677fd4871e6999a9564101dca26091ec18ef/badges/push_swape.png" width="75px"><img align="right" alt="push_swap" src="https://github.com/eduaserr/42-project-badges/blob/a48e677fd4871e6999a9564101dca26091ec18ef/badges/push_swapn.png" width="75px">
    <h1 align="center"> ~PUSH_SWAP~ <br><img alt="success 100/100" src="https://img.shields.io/badge/100%2F100-green?style=plastic&logoColor=green&label=success"></h1>
</div>
<p align="center">A number sorting algorithm project using stacks.<br></p>
<div align="justify">
<code>Push_Swap</code> is a project from the <b>Common Core</b> of <b>42Cursus</b> where you will learn about sorting algorithms and data structures using stacks. The objective is to sort a list of numbers with the least number of operations.
</div>

## Description

The Push_Swap program sorts a list of numbers using a set of predefined operations on two stacks. The goal is to sort the numbers with the minimum number of operations.

## Algorithm

The algorithm used in Push_Swap involves analyzing the cost of moving elements between two stacks to achieve a sorted order. The main steps include:

1. **Cost Analysis**:
   - Calculate the cost of moving each element to its correct position in the sorted stack.

2. **Target Calculation**:
   - Determine the target position for each element in the other stack.

3. **Move Elements**:
   - Move elements between stacks based on the calculated costs to achieve a sorted order.

## Operations

The following table lists the operations used in the Push_Swap program:

| Operation | Description |
|:-----------:|:-------------|
| `push`    | Move the top element from one stack to another. |
| `rotate`  | Rotate the stack upwards. |
| `rrotate` | Rotate the stack downwards. |
| `swap`    | Swap the top two elements of the stack. |

## Files

### Operations

- **[push.c](https://github.com/eduaserr/push_swap/blob/main/src/operations/push.c)**: Contains functions for push operations.
- **[rotate.c](https://github.com/eduaserr/push_swap/blob/main/src/operations/rotate.c)**: Contains functions for rotate operations.
- **[rrotate.c](https://github.com/eduaserr/push_swap/blob/main/src/operations/rrotate.c)**: Contains functions for reverse rotate operations.
- **[swap.c](https://github.com/eduaserr/push_swap/blob/main/src/operations/swap.c)**: Contains functions for swap operations.

### Sort

- **[sort_costs.c](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_costs.c)**: Functions for calculating costs.
- **[sort_stack.c](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)**: Functions for determining targets and moving elements.
- **[sort_utils.c](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_utils.c)**: Utility functions for sorting.
- **[sort.c](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort.c)**: Main sorting algorithm functions.

### Stack

- **[stack_init.c](https://github.com/eduaserr/push_swap/blob/main/src/stack/stack_init.c)**: Functions for initializing stacks.
- **[stack_utils.c](https://github.com/eduaserr/push_swap/blob/main/src/stack/stack_utils.c)**: Utility functions for stack operations.

### Utils

- **[utils_error.c](https://github.com/eduaserr/push_swap/blob/main/src/utils/utils_error.c)**: Error handling functions.
- **[utils_parse_input.c](https://github.com/eduaserr/push_swap/blob/main/src/utils/utils_parse_input.c)**: Functions for parsing input.
- **[utils.c](https://github.com/eduaserr/push_swap/blob/main/src/utils/utils.c)**: General utility functions.

## Main Functions

| Function | Description |
|----------:|:-------------|
| **[`init_stack`](https://github.com/eduaserr/push_swap/blob/main/src/stack/stack_init.c)** | Initializes the stack with given values. |
| **[`is_sorted`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_utils.c)** | Checks if the stack is sorted in ascending order. |
| **[`get_index`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_costs.c)** | Assigns an index to each element in the stack and determines if it is in the upper or lower half. |
| **[`get_cost`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_costs.c)** | Calculates the cost of moving each element in stack A to its target position in stack B. |
| **[`cheapest`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_costs.c)** | Finds the element in stack A with the lowest cost to move. |
| **[`cost_analysis`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_costs.c)** | Analyzes the cost of moving elements and moves the cheapest element to stack B. |
| **[`a_targets`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)** | Determines the target position in stack B for each element in stack A. |
| **[`b_targets`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)** | Determines the target position in stack A for each element in stack B. |
| **[`move_to_b`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)** | Moves the cheapest element from stack A to stack B. |
| **[`move_to_a`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)** | Moves elements from stack B to stack A based on their target positions. |
| **[`minvalue_ontop`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort_stack.c)** | Moves the minimum value in stack A to the top. |
| **[`sort_three`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort.c)** | Sorts a stack of three elements by finding the maximum element and rotating or swapping as needed. |
| **[`sort_big`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort.c)** | Sorts a larger stack by moving elements to stack B, sorting stack A, and then moving elements back to stack A. |
| **[`sort_algorithm`](https://github.com/eduaserr/push_swap/blob/main/src/sort/sort.c)** | Determines the appropriate sorting method based on the size of the stack and whether it is already sorted. |


## Example Usage

To compile the program, use the provided Makefile by typing `make` in the terminal.

    make

To run the program, provide a list of numbers as arguments.

    ./push_swap 3 2 5 1 4

This will output the sequence of operations needed to sort the numbers.

You can use a shell variable to store the list of numbers and pass it to the program. This is useful for testing with different sets of numbers without typing them each time.

1. Define a variable with the list of numbers:

    ```sh
    ARG="3 2 5 1 4"
    ```

2. Pass the variable to the program:

    ```sh
    ./push_swap $ARG
    ```

This will run the program with the numbers stored in the `ARG` variable and output the sequence of operations needed to sort them.

### Counting the Number of Movements

In a big list of numbers to order, it may be hard to count the number of movements (operations) output by the program, you can use the `wc -l` command to count the lines of output. This will give you the total number of operations performed.

1. Run the program and pipe the output to `wc -l`:

    ```sh
    ./push_swap $ARG | wc -l
    ```

This will display the number of lines in the output, which corresponds to the number of operations needed to sort the numbers.

---
## 🎯 **Fun Tips & Tricks** 💡
*Why do we set pointers to `NULL` after using `free`?
It isn't strictly necessary, but it's a good practice. Setting a pointer to `NULL` ensures that if we try to access it after freeing, we won't accidentally access invalid memory.*

#### Strings free function

```c
	char	*ft_free_str(char **str)
	{
		free(*str); //free's memory allocated by str pointer.
		*str = NULL; // Set the pointer to NULL to avoid accidental access
		return (NULL);
	}
```

#### Arrays free function


```c
	void	ft_freemap(char ***map)
	{
		int	i;

		if (map && *map) // Verify if the pointer and its content are not NULL
		{
			i = 0;
			while ((*map)[i]) // Free each element of the array
			{
				free((*map)[i]);
				i++;
			}
		free(*map); // Free the array itself
		*map = NULL; // Set the pointer to NULL to avoid accidental access
		}
	}
```

## 🔍 What did we learn here?
- Freeing memory: Use free to release dynamically allocated memory.

- Assigning NULL after freeing: Prevents accidental access to freed memory.

- Using a double pointer (**): Allows modifying the original pointer from within the function.