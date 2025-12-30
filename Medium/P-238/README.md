# Problem 238: Product of Array Except Self

## Method
Prefix and Suffix Products

## Solution Logic
First pass: calculate prefix products (product of all elements to the left) and store in result array. Second pass: calculate suffix products (product of all elements to the right) on the fly and multiply with the prefix products already in the result array. This gives product of all elements except self.

## Complexity
- **Time Complexity:** O(n) - Two passes through the array
- **Space Complexity:** O(1) - Excluding the output array

