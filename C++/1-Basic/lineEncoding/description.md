**Problem from CodeSignal.com**

Given a string, return its encoding defined as follows:

1. First, the string is divided into the least possible number of disjoint substrings consisting of identical characters.
    - For example, "aabbbc" is divided into ["aa", "bbb", "c"].

2. Next, each substring with a length greater than one is replaced with a concatenation of its length and the repeating character.
    - For example, substring "bbb" is replaced by "3b".

3. Finally, all the new strings are concatenated together in the same order, and a new string is returned.

**Example**

For s = "aabbbc", the output should be
solution(s) = "2a3bc".

**Input/Output**

- [execution time limit] 0.5 seconds (cpp)
- [memory limit] 1 GB
- [input] string s
    - String consisting of lowercase English letters.
    - Guaranteed constraints: 4 ≤ s.length ≤ 15.
- [output] string
    - Encoded version of s.