# Problem 15: 3Sum

## Method
Two Pointers with Sorting

## Solution Logic
Sort the array first. For each element, use two pointers to find pairs that sum to the negative of that element. Skip duplicates for the first element and for the two pointers. When a valid triplet is found, add it to results and skip duplicate values for both pointers.

## Complexity
- **Time Complexity:** O(n²) - Sort O(n log n) + nested loops O(n²)
- **Space Complexity:** O(1) - Excluding the output array

