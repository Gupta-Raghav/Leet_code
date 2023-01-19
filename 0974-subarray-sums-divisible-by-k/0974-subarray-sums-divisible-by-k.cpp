class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, sum =0;
        for(auto num:nums){
            sum += num;
            int mod = (sum%k +k)%k;
            count += mp[mod];
            mp[mod]++;
            // cout << mod << " MP MOD: " << mp[mod] << " count "<< count <<endl;
        }
        return count;
    }
};