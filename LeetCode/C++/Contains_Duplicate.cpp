class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int x = nums.size();
        for(int i = 1; i < x; i++) {
            if(nums[i-1] == nums[i]) 
                return true;
        }
        return false;
    }
};

// Time Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int idx = 0; idx < nums.size(); idx++) {
            if(st.count(nums[idx]))
                return true;
            st.insert(nums[idx]);
        }
        return false;
    }
};
