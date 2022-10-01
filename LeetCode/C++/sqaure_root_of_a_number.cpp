#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


int mySqrt(int n){
    int start=0,end=n,ans=0;
    while(start<=end){
        unsigned long long int mid=start+(end-start)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return start;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,input;
    cin>>t;
    cout<<mySqrt(t);
    return 0;
}
