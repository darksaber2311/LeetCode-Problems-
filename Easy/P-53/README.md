# Problem 53: Maximum Subarray

## Method
Kadane's Algorithm (Dynamic Programming)

## Solution Logic
Maintain two variables: current sum and best sum. For each element, decide whether to extend the previous subarray or start a new one by taking the maximum of the current element and the sum of current element plus previous sum. Update the best sum whenever we find a larger sum.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(1) - Constant extra space

