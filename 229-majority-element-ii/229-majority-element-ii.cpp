class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> res;
        int n =nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for (auto x: freq){
              if(x.second>(n/3))
                res.push_back(x.first);
        }
        return res;
        
    }
};