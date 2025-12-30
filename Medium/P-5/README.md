# Problem 5: Longest Palindromic Substring

## Method
Expand Around Centers

## Solution Logic
For each possible center in the string (both odd and even length palindromes), expand outward while characters match. Track the start position and maximum length of the longest palindrome found. Check both odd-length (center at i) and even-length (center between i and i+1) palindromes.

## Complexity
- **Time Complexity:** O(n²) - For each center, expand outward
- **Space Complexity:** O(1) - Constant extra space

