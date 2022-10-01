// Decode ways --Leetcode 91 ---Medium ---- 1D DP 
// Memoization O(n) in CPP 
// Asked by Facebook, Atlassian multiple times 

/*

Recursive Tree 

 123
 / \
 1  12
/ \  \
2 23  3

*/ 
class Solution {
    int dfs (vector<int>&memo,string &s,int i){
        if(memo[i])
            return memo[i];
        if (s[i] == '0')
            return memo[i]=0;
        int count=dfs(memo,s,i+1);  // first digit 
        if(i< s.size()-1 && (s[i]=='1' || s[i]=='2' && s[i+1]<'7')) //check second digit so that 2 corresponding digit should not be greater than 26 
            count+=dfs(memo,s,i+2); 
        return memo[i]=count;
    }
    
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int>memo(n+1,0); // create a memo of s.size()+1 length 
        memo[n]=1;
        return dfs(memo,s,0);
    }
};