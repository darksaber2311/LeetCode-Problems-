# Problem 11: Container With Most Water

## Method
Two Pointers (Greedy)

## Solution Logic
Start with two pointers at both ends. Calculate the area using the shorter height and the distance between pointers. Move the pointer with the shorter height inward, as moving the taller one cannot increase the area. Update the maximum area whenever a larger area is found.

## Complexity
- **Time Complexity:** O(n) - Single pass with two pointers
- **Space Complexity:** O(1) - Constant extra space

