/*
Problem Statement: Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). Return the running sum of nums.

Example:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>a;
        int sum=0;
        for(int i = 0; i < nums.size(); i++){
            sum=sum+nums[i];
            a.push_back(sum);
        }
        return a;
    }
};
