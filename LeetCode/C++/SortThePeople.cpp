class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> sol;
        map<int,string> m;
        for(int i=0;i<heights.size();i++)
        {
            m[heights[i]]=names[i];
        }
        for(auto itr:m)
        {
            sol.push_back(itr.second);
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};