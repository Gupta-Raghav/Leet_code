class Solution {
 private:
    bool helper(string s,int n,int i,int j){
        while(j>i){
            if(s[i]==s[j]){
                 i++;
                 j--;
            } else return false;
        }
        // if equal return true;
        return true;
    }
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0,j=n-1;
        while(j>i){
            // if equal continue;
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else{
                    //find the output of both of these functions first with i++ and other with j--
                    return helper(s,n,i+1,j) || helper(s,n,i,j-1);
                }
          }
          return true;
        }
};