class Solution {
public:
    int totalFruit(vector<int>& fruits) {
     unordered_map<int,int> mp;
        int n = fruits.size();
        int i=0,j=0;
        int maxf=0;
        while(i<n){
            mp[fruits[i]]++,i++;
            while(mp.size()>2){
                mp[fruits[j]]--;
                if(!mp[fruits[j]]) mp.erase(fruits[j]);
                j++;
            }
            maxf=max(maxf,i-j);
        }
        return maxf;
    
    }
};