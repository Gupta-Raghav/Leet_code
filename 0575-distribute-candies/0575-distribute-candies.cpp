class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candies;
        int n = candyType.size();
        for(int i=0;i<n;i++){
            candies.insert(candyType[i]);
        }
        int c = candies.size();
       return c>(n/2)?  n/2 :  c ;
    }
};