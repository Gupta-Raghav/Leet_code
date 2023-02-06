class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        int lo = 0, mid = n, hi =nums.size();
        while(mid<hi){
            res.push_back(nums[lo++]);
            res.push_back(nums[mid++]);
        }
        return res;
    }
};