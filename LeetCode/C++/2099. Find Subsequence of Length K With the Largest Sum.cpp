class Solution {
public:
    typedef pair<int, int> pd;
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        pair<int,int> p;
        priority_queue<pd,vector<pd>, greater<pd>> q;
        
        for(int i=0; i<nums.size(); i++){
            p=make_pair(nums[i],i);
            q.push(p);
            if(q.size()>k) q.pop();
        }
        
        map<int,int> m;
     
        while(!q.empty()){
            m.insert({q.top().second, q.top().first});
            q.pop();
        }

        vector<int>ans;
        for(auto itr:m) ans.push_back(itr.second);
        return ans;
    }
};