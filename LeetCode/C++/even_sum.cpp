class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        vector<int> result;
        for(auto c : nums){
            if(c % 2 == 0){
                sum += c;
            }
        }
        for(auto c : queries){
            if((nums[c[1]]+c[0]) % 2 == 0){
                if(nums[c[1]] % 2 == 0){
                    sum -= nums[c[1]];
                    nums[c[1]] += c[0];
                    sum += nums[c[1]];
                    result.push_back(sum);
                }else{
                    nums[c[1]] += c[0];
                    sum += nums[c[1]];
                    result.push_back(sum);
                }
                
            }else{
                if(nums[c[1]] % 2 == 0){
                    sum -= nums[c[1]];
                    nums[c[1]] += c[0];
                    result.push_back(sum);
                }else{
                    nums[c[1]] += c[0];
                    result.push_back(sum);
                }
            }
        }
        return result;
    }
};