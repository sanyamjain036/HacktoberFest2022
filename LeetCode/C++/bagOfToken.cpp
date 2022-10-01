#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int bagOfTokensScore(vector<int> &tokens,int power){
    sort(tokens.begin(),tokens.end());
    int start=0,end=tokens.size()-1,score=0;
    while(start <= end){
        while(start<=end && tokens[start] <= power){
            score++;
            power -= tokens[start];
            start++;
        }
        if(start>=end || score<=0) break;
        score-=1;
        power += tokens[end];
        end--;
    }
    return score;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,power;
    cin>>t;
    vector<int> tokens(t);
    for(int i=0;i<t;i++){
        cin>>tokens[i];
    }
    cin>>power;
    cout<<bagOfTokensScore(tokens,power)<<endl; 
    return 0;
}
