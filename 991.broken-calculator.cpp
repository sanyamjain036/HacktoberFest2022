/*
 * @lc app=leetcode id=991 lang=cpp
 *
 * [991] Broken Calculator
 */

// @lc code=start
class Solution {
public:
    int brokenCalc(int sV, int t) {
        int i=0;
        while(t>sV) {
            t%2? t++ : t/=2;
            i++;
        }

        return i+(sV-t);
    }
};
// @lc code=end

