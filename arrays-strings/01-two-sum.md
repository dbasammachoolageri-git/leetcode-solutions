## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution checks every pair of elements in the array using two nested loops. If the sum of two elements equals the target, their indices are stored and returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution handles duplicate values correctly. For example, [3, 3] with target 6 returns indices [0, 1].