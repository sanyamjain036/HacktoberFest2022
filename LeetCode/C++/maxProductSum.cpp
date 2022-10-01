#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int maxProduct(vector<int> &nums){
    int n = nums.size(),max_value = INT_MIN,ans=1;
    for(int i=0;i<n;i++){
        ans = ans*nums[i];
        if(ans > max_value) max_value = ans;

        if(ans == 0) ans = 1;
    }
    ans=1;
    for(int i=n-1;i>=0;i--){
        ans = ans*nums[i];
        if(ans > max_value) max_value = ans;
        if(ans == 0) ans = 1;
    }

    return max_value;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maxProduct(nums)<<endl;
    return 0;
}
