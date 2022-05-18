class Solution {
public:
    bool ispal(string str,int lo,int hi){
        while(lo<=hi){
            if(str[lo++]!=str[hi--]){
                return false;
            }
        }
        return true;
    }
    void findpal(int ind,vector<vector<string>>&res,vector<string> &ds,string s){
        if(ind==s.size()){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();++i){
            if(ispal(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                findpal(i+1,res,ds,s);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;
        findpal(0,res,ds,s);
        return res;
    }
};