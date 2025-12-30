# Problem 20: Valid Parentheses

## Method
Stack

## Solution Logic
Use a stack to track opening brackets. For each closing bracket, check if it matches the most recent opening bracket on the stack. If the stack is empty when encountering a closing bracket, or if brackets don't match, return false. At the end, the stack should be empty for valid parentheses.

## Complexity
- **Time Complexity:** O(n) - Single pass through the string
- **Space Complexity:** O(n) - Stack to store opening brackets

