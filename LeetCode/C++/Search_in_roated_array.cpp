#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool search(vector<int>& nums, int target) {
        int start = 0;
        int end=nums.size() - 1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            if (nums[mid] == target)
                return true;
            if((nums[start]==nums[mid])&&(nums[end]==nums[mid])){
                start++;
                end--;
            }

            else if(nums[start]<=nums[mid]){
                if((nums[start]<=target)&&(nums[mid]>target))
                    end=mid-1;
                else
                    start=mid+1;
            }

            else{
                if((nums[mid]<target)&&(nums[end]>=target))
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return false;
    }


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,target;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cin>>target;
    cout<<search(nums,target);
    return 0;
}

