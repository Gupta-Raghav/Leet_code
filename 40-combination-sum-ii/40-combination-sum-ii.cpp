class Solution {
public:
    void solve(int ind, int target,vector<int>& candidates,vector<vector<int>> &res,vector<int>& sub){
       if(target==0){
           res.push_back(sub);
           return;
       }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            sub.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,res,sub);
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
          vector<vector<int>> res;
        vector<int> sub;
        sort(candidates.begin(),candidates.end());
        solve(0,target,candidates,res,sub);
        return res;
    }
};