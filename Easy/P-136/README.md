# Problem 136: Single Number

## Method
Bit Manipulation (XOR)

## Solution Logic
Use XOR operation which has the property that a number XORed with itself equals 0, and any number XORed with 0 equals itself. XOR all numbers in the array - pairs will cancel out, leaving only the single number.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(1) - Constant extra space

