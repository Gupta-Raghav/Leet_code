class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int i,j=0;
        int n = s.length();
        map<char,int> mp;
        int ans=0;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1 and i<=j){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};