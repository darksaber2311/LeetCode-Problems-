# Problem 21: Merge Two Sorted Lists

## Method
Two Pointers / Merge Technique

## Solution Logic
Use a dummy node to simplify edge cases. Compare the values at the heads of both lists, and append the smaller node to the result. Move the pointer of the list from which we took the node. Continue until one list is exhausted, then append the remaining nodes from the other list.

## Complexity
- **Time Complexity:** O(n + m) - Where n and m are lengths of the two lists
- **Space Complexity:** O(1) - Only using a dummy node

