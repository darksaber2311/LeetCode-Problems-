# Problem 1: Two Sum

## Method
Hash Map (Unordered Map)

## Solution Logic
For each number in the array, calculate the complement (target - current number). Check if the complement exists in the hash map. If found, return the indices. Otherwise, store the current number and its index in the hash map for future lookups.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(n) - Hash map to store indices

