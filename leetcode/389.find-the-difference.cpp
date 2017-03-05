/*
 * [389] Find the Difference
 *
 * https://leetcode.com/problems/find-the-difference
 *
 * Easy (51.10%)
 * Total Accepted:    55818
 * Total Submissions: 109176
 * Testcase Example:  '"abcd"\n"abcde"'
 *
 * 
 * Given two strings s and t which consist of only lowercase letters.
 * 
 * String t is generated by random shuffling string s and then add one more
 * letter at a random position.
 * 
 * Find the letter that was added in t.
 * 
 * Example:
 * 
 * Input:
 * s = "abcd"
 * t = "abcde"
 * 
 * Output:
 * e
 * 
 * Explanation:
 * 'e' is the letter that was added.
 * 
 */
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        for (auto c : t) ++m[c];
        for (auto c : s) if (--m[c] == 0) m.erase(c);
        return m.begin()->first;
    }
};