#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

vector<int> searchRange(vector<int> v,int target){
    int start=0,end=v.size()-1,ans=-1,mid=start-(start-end)/2;
    vector<int> answer;
    while(start<=end){
        mid=start+(end-start)/2;
        if(v[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(v[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    answer.push_back(start);
    answer.push_back(end);
    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>target;
        vector<int> ans;
        ans=searchRange(v,target);
        for(auto it : ans){
            cout<<it<<" ";
        }
    }
    return 0;
}
