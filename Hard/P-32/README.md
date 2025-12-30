# Problem 32: Longest Valid Parentheses

## Method
Stack

## Solution Logic
Use a stack to store indices, starting with -1 as base. For each '(' push its index. For each ')', pop from stack. If stack becomes empty, push current index as new base. Otherwise, calculate length from current index to top of stack and update maximum length. This tracks the longest valid parentheses substring.

## Complexity
- **Time Complexity:** O(n) - Single pass through the string
- **Space Complexity:** O(n) - Stack to store indices

