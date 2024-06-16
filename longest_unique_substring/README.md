# 3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

## Examples

### Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

### Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

### Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Solution sketch

1. Create two pointers that travel through the string p1 p2
2. Move the right pointer until it finds a visited character
    ```
    abvwcbefgae
    ^    ^   
    1    2
    ```
3. When it finds a visited character, move the left until we are back in the clear before proceeding
    ```
    abvwcbefgae
      ^  ^   
      1  2
    ```
4. Keep score of the largest string size (and string)

