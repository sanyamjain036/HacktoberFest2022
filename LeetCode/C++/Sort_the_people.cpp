class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int, string>> V;
        int N = names.size();
        for(int i = 0; i < N; i++) {
            V.push_back({heights[i], names[i]});
        }

        sort(V.rbegin(), V.rend());

        vector<string> res;
        for(int i = 0; i < N; i++) {
            res.push_back(V[i].second);
        }
        return res;
    }
};
