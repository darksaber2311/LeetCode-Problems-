# Problem 10: Regular Expression Matching

## Method
Dynamic Programming (2D DP)

## Solution Logic
Use DP table where dp[i][j] represents if first i characters of string match first j characters of pattern. Handle three cases: normal character match, '.' (matches any), and '*' (zero or more of preceding). For '*', check zero occurrences (skip pattern) or one+ occurrences (match and continue). Base case: empty string matches empty pattern.

## Complexity
- **Time Complexity:** O(n × m) - Where n is string length and m is pattern length
- **Space Complexity:** O(n × m) - DP table

