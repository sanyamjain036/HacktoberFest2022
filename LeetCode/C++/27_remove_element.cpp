class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
                n--;
            }
            
            
        }
        return nums.size();
    }
};
