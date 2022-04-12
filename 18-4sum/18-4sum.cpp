class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty())
            return res;
         sort(nums.begin(),nums.end());
          int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int sum_3 = target - nums[i];
            for(int j=i+1;j<n;j++)
            {
                int sum_2 = sum_3-nums[j];

                int left = j+1;
                int right = n-1;
                while(left < right){
                    int two_sum = nums[left] + nums[right];
                    if(two_sum <sum_2) left++;
                    else if(two_sum > sum_2) right--;
                    else{
                        vector<int> quadra(4,0);
                        quadra[0] = nums[i];
                        quadra[1] = nums[j];
                        quadra[2] = nums[left];
                        quadra[3] = nums[right];
                        res.push_back(quadra);
                        while(left<right && nums[left] ==quadra[2]) ++left;
                        while(left<right && nums[right]==quadra[3]) --right;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return res;
    }

};