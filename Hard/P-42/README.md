# Problem 42: Trapping Rain Water

## Method
Two Pointers (Greedy)

## Solution Logic
Use two pointers from both ends. Track leftMax and rightMax. Process the side with smaller height first. For each position, if current height is less than the max on that side, water can be trapped (max - current). Otherwise, update the max. Move the pointer of the side with smaller height. This ensures we always know the limiting height.

## Complexity
- **Time Complexity:** O(n) - Single pass with two pointers
- **Space Complexity:** O(1) - Constant extra space

