# Problem 76: Minimum Window Substring

## Method
Sliding Window with Hash Maps

## Solution Logic
Use two hash maps: one for required characters in pattern, another for current window. Expand window by moving right pointer, adding characters to window map. When all required characters are satisfied, try to contract from left to find minimum window. Track minimum length and start position. Move left pointer when window is valid to shrink it.

## Complexity
- **Time Complexity:** O(n + m) - Where n is string length and m is pattern length
- **Space Complexity:** O(m) - Hash maps for character frequencies

