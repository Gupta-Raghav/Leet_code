class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN,sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            max_sum = max(sum, max_sum);
            if(sum <0)
                sum =0;
        }
        return max_sum;
    }
};