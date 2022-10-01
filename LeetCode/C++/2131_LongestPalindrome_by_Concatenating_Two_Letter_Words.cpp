// leetcode problem 2131 
//LongestPalindrome by Concatenating Two Letter Words 
// Time Complexity  : O(length of words)
// Space Complexity : O(1)

class Solution{
public:
   int longestPalindrome(vector<string>& words) {
    vector<vector<int>> counter(26, vector<int>(26, 0));
    int ans = 0;
    for (string w: words) {
        int a = w[0] - 'a', b = w[1] - 'a';
 // if the mirror of the pair is found then we will have +4 letters 
//  or if two pair of same letters is found then also we have +4 

        if (counter[b][a]) ans += 4, counter[b][a]--; 
        else counter[a][b]++;
    }
    for (int i = 0; i < 26; i++) {
// when a single pair of a letter is found
        if (counter[i][i]) {
            ans += 2;
            break;
        }
    }
    return ans;
}
};