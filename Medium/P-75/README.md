# Problem 75: Sort Colors

## Method
Dutch National Flag Algorithm (Three Pointers)

## Solution Logic
Use three pointers: low (for 0s), mid (current), and high (for 2s). If current element is 0, swap with low and increment both low and mid. If current element is 1, just increment mid. If current element is 2, swap with high and decrement high (don't increment mid to re-check the swapped element).

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(1) - In-place sorting

