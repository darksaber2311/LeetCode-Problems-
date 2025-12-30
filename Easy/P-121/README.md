# Problem 121: Best Time to Buy and Sell Stock

## Method
Greedy Algorithm (Track minimum price)

## Solution Logic
Track the minimum price seen so far. For each day, calculate the profit if we sell on that day (current price - minimum price). Update the maximum profit whenever we find a better profit. Update the minimum price whenever we encounter a lower price.

## Complexity
- **Time Complexity:** O(n) - Single pass through the array
- **Space Complexity:** O(1) - Constant extra space

