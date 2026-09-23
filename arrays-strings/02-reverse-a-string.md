## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

The string is reversed in-place using two pointers. One pointer starts from the beginning and the other starts from the end. The characters at these positions are swapped, and the pointers move toward the center.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the original character array directly without using another array.
It also works correctly for a single-character string.