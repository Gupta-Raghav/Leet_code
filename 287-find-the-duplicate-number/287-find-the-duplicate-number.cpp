class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> map(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map[nums[i]]>1){
                return nums[i];
            }
        }
        return 0;
    }
};