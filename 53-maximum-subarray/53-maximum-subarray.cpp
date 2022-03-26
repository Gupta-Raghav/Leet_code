class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0],maxend =0;
        int n = nums.size();
        int s = 0;
        for(int i =0;i<n;i++){
            maxend += nums[i];
            if(max_sum<maxend){
                max_sum = maxend;
            }
            if(maxend<0){
                maxend =0;
            }
        }
        return max_sum;
    }
};