# Problem 438: Find All Anagrams in a String

## Method
Sliding Window with Frequency Array

## Solution Logic
Use a frequency array to count characters in pattern. Maintain a sliding window of pattern length. For each window, track character frequencies. When a character enters the window, decrement its count if it's in pattern. When a character leaves, increment its count. When all required characters are matched (count reaches 0), record the starting index.

## Complexity
- **Time Complexity:** O(n) - Single pass through the string
- **Space Complexity:** O(1) - Fixed size frequency array (26 characters)

