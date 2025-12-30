# Problem 33: Search in Rotated Sorted Array

## Method
Binary Search (Modified)

## Solution Logic
Use binary search but determine which half is sorted. If the left half is sorted, check if the target lies within that range and adjust pointers accordingly. If the right half is sorted, check if the target lies within that range. This allows us to eliminate half of the search space at each step.

## Complexity
- **Time Complexity:** O(log n) - Binary search approach
- **Space Complexity:** O(1) - Constant extra space

