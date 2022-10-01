/*
	link: https://leetcode.com/problems/longest-valid-parentheses/
	TC: O(n) just 1 traversal over the string
	SC: O(n) due to usage of stack which at max holds all 'n' indices
*/

class Solution {
public:

    
    int longestValidParentheses(string s) {
        int n = s.size();
        
        stack<int> st;
        int ans = 0;
        st.push(-1);
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                if(st.top()!=-1 && s[st.top()] == '(')st.pop(), ans = max(ans, i - st.top());
                else{
                    ans = max(ans,i - st.top() - 1);
                    st.push(i);
                }
            }
        }
        ans = max(ans,n - st.top() - 1);
        return ans;
    }
};
