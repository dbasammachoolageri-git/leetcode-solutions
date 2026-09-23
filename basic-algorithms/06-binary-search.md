## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

The solution uses binary search on the sorted array. Two pointers represent the current search range. The middle element is compared with the target, and half of the search range is eliminated after each comparison.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted. The solution returns the index of the target if found; otherwise, it returns -1.