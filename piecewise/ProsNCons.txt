# Advantages and Disadvantages of each method

## Recursive solution

1. Advantage: Easy to understand and implement.
2. Disadvantage: The recursive approach can be inefficient for large values of n due to repetitive function calls. It may lead to exponential time complexity.

## Dynamic programming solution

1. Advantage: The dynamic approach eliminates the recursive function calls and solves the problem iteratively. It avoids the overhead of function calls and has a linear time complexity.
2. Disadvantage: It requires extra space to store the dynamic programming array. However, the space complexity is the same as the maximum value of n.

## Using memoization solution

1. Advantage: Memoization optimizes the recursive approach by storing the results of function calls in an array. It avoids redundant calculations and improves the overall runtime significantly.
2. Disadvantage: Additional space is required to store the memoization array. If the range of n is very large, it can result in high memory consumption.
