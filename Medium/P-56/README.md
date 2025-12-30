# Problem 56: Merge Intervals

## Method
Sorting and Merge

## Solution Logic
Sort intervals by their start values. Iterate through sorted intervals and check if the current interval overlaps with the last merged interval. If it overlaps (current start <= last end), merge by updating the end to the maximum of both ends. Otherwise, add it as a new interval.

## Complexity
- **Time Complexity:** O(n log n) - Sorting the intervals
- **Space Complexity:** O(n) - Output array for merged intervals

