// Source : https://leetcode.com/problems/check-if-the-sentence-is-pangram/



class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool stat[26] = {false};
        for(auto& c: sentence) {
            stat[c - 'a'] = true;
        }
        for(auto& s : stat) {
            if (!s) return false;
        }
        return true;
    }
};