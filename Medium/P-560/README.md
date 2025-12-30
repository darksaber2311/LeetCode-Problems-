# Problem 560: Subarray Sum Equals K

## Method
Prefix Sum with Hash Map

## Solution Logic
Maintain a running sum and a hash map storing frequency of prefix sums. For each element, add it to running sum. Check if (current_sum - k) exists in the map - if it does, it means there's a subarray ending at current index with sum k. Increment count by the frequency. Update the map with current prefix sum.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(n) - Hash map to store prefix sums

