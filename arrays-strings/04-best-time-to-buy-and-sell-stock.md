## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The solution keeps track of the minimum stock price seen so far. For each price, it calculates the possible profit by selling on that day and updates the maximum profit if the new profit is larger.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution makes only one pass through the array. If no profitable transaction is possible, it returns 0.