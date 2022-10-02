class Solution {
public:
    bool wordBreak(string s, vector<string>& d) {
        unordered_set<string> h;
        
        for(int i=0;i<d.size();i++){
            h.insert(d[i]);
        }
        vector<bool> v(s.size()+1);
        v[0]=true;
        
        for(int i=1; i <= s.size(); i++){
            for(int j=0; j < i; j++){
                if(v[j] && h.find(s.substr(j, i-j))!=h.end()){
                    v[i] = true;
                    break;
                }
            }
        }
        return v[s.size()];
    }
};