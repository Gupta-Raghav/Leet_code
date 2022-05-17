class Solution {
public:
    void solve(int ind, int target,vector<int>& candidates,vector<vector<int>> &res,vector<int>& sub){
        if(ind==candidates.size())
        {
            if(target==0){
                res.push_back(sub);
            }
            return;
        }
        if(candidates[ind]<=target){
            sub.push_back(candidates[ind]);
            solve(ind,target-candidates[ind],candidates,res,sub);
            sub.pop_back();
        }
        solve(ind+1,target,candidates,res,sub);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sub;
        solve(0,target,candidates,res,sub);
        return res;
    }
};