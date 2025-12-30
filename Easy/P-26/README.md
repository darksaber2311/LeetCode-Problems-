# Problem 26: Remove Duplicates from Sorted Array

## Method
Two Pointers

## Solution Logic
Use two pointers: one to iterate through the array and another to track the position where unique elements should be placed. When a new unique element is found (different from the previous one), place it at the tracked position and increment the pointer.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(1) - In-place modification

