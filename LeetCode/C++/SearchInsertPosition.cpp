#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int searchInsert(vector<int>& nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,input,target;
    cin>>t;
    vector<int> nums;
    while(t--){
        cin>>input;
        nums.push_back(input);
    }
    cin>>target;
    cout<<searchInsert(nums,target);
    return 0;
}
