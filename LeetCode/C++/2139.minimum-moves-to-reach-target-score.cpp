/*
 * @lc app=leetcode id=2139 lang=cpp
 *
 * [2139] Minimum Moves to Reach Target Score
 */

// @lc code=start
class Solution {
public:
    int minMoves(int t, int maxD) {
        int c=0;
        if(!maxD) return t-1;
        while(t>1 and maxD>0) {
            if(t%2) t--;
            else {
                t/=2;
                maxD--;
            }
            c++;
        }

        return c+(t-1);
    }
};
// @lc code=end

