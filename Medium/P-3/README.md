# Problem 3: Longest Substring Without Repeating Characters

## Method
Sliding Window with Hash Map

## Solution Logic
Maintain a sliding window using two pointers (left and right). Use a hash map to store the last occurrence index of each character. When a duplicate is found, move the left pointer to the position after the last occurrence of that character. Update the maximum length whenever the window expands.

## Complexity
- **Time Complexity:** O(n) - Each character visited at most twice
- **Space Complexity:** O(min(n, m)) - Hash map for character positions, where m is character set size

