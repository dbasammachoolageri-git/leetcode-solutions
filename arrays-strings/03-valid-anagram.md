## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

The solution uses an integer array of size 26 to count the frequency of each lowercase English letter. Characters from the first string increase the counts, while characters from the second string decrease them. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution checks whether both strings contain the same characters with the same frequencies.