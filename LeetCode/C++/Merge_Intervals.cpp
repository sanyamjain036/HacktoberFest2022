class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
   vector<vector<int>>mergeintevals;
        if(intervals.size()==0){
              return mergeintevals; 
        }
        
        sort(intervals.begin(),intervals.end());
         vector<int>tempinteval = intervals[0];
        
        for(auto it: intervals)
        {
            if(it[0]<=tempinteval[1])
            {
               tempinteval[1]=max(it[1],tempinteval[1]);
            }
            else
            {
             mergeintevals.push_back(tempinteval);
             tempinteval = it;
            }
        }
        mergeintevals.push_back(tempinteval);
        return mergeintevals;
    }
};
