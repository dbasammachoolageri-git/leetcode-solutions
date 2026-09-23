## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The solution compares the characters at the same position in all strings. It continues until a character differs or one of the strings ends. The matching characters form the longest common prefix.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

The solution correctly handles cases where there is no common prefix.
For example, ["dog", "racecar", "car"] returns an empty string.