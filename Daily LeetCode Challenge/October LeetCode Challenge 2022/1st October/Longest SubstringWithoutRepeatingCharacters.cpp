   map<char,int> m;
    int temp=0, ans=INT_MIN,reset_i=0;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
        temp++;
        if(m[s[i]]>1)
        {
            map<char,int> :: iterator it;
            for(it=m.begin();it!=m.end();it++)
                it->second=0;
            temp--;
            i=reset_i++;
            ans = max(ans,temp);
            temp=0;
        }
    }
   return max(ans,temp);
}