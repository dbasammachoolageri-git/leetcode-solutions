## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

The solution uses a stack to store opening brackets. When a closing bracket is found, it is compared with the most recent opening bracket. If they match, the opening bracket is removed from the stack. At the end, the stack must be empty for the string to be valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution correctly handles different types of brackets: parentheses (), curly brackets {}, and square brackets [].