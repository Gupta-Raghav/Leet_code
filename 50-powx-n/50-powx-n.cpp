class Solution {
public:
    double myPow(double x, int n) {
        return myPowhel(x,n);
    }
    double myPowhel(double x, long n){
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n<0) return myPowhel(1/x,-n);
        
        double res = myPowhel(x*x,n/2);
        if(n%2==1){
            res = res*x;
        }
    return res;
    }
};

