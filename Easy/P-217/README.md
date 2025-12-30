# Problem 217: Contains Duplicate

## Method
Hash Set

## Solution Logic
Iterate through the array and check if each element already exists in a hash set. If found, return true immediately. Otherwise, add the element to the set and continue. If no duplicates are found after processing all elements, return false.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(n) - Hash set to store seen elements

