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
