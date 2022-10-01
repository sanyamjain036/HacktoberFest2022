#include<bits/stdc++.h>

using namespace std;

bool isValid(string s){
    stack<char> str;
    for(int i=0;i<s.size();i++){
        if(str.empty()){
            str.push(s[i]);
        }
        else if((str.top() == '(' && s[i] == ')')|| (str.top() == '{' && s[i] == '}')
                 || (str.top() == '[' && s[i] == ']')){
            str.pop();
        }
        else{
            str.push(s[i]);
        }
    }
    if(str.empty()){
        return 1;
    }
    return 0;
}