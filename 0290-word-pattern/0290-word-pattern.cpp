class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s += ' ';
        int np =pattern.size();
        int ns = s.size();
        vector<string> res;
        string temp = "";
        for(int i=0;i<ns;i++){
            if(s[i]!=' ') temp += s[i];
            else {
                res.push_back(temp);
                temp ="";
            }
        }
        int n = res.size();
        if(n!= np)return false;
        unordered_map<char, string> mp;
         unordered_map<string, char> mp2;
          for(int i=0;i<np;i++){
            if(mp.find(pattern[i])== mp.end()){
                mp[pattern[i]] = res[i];
                if(mp2.find(res[i]) != mp2.end()){
                    if(mp2[res[i]] != pattern[i])
                        return false;
                } else {
                    mp2[res[i]] = pattern[i];
                }
            }
            else{
                if(mp[pattern[i]] != res[i]){
                    return false;
                }
            }
        }
        return true;
    }
};