vector<int> twoSum(vector<int>& nums, int target) {
    // initialize map, Here map's key is number and value is index
        unordered_map<int,int> mp;
    for(int i = 0;i<nums.size();i++){
        // if we got target - number 
        // return value which is our index and current index
        if(mp.find(target-nums[i])!=mp.end()){
            return {mp[target-nums[i]],i};
        }
        // if we not find any number target-value we we insert current number and it's index in map
        // so that if this number is target - number = this.number then we can return it's index
        mp[nums[i]]=i;
    }
    return {0};