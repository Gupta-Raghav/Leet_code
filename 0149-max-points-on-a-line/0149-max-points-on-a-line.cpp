class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n =points.size();
        if(n<2) return n;
        int max_c = 1;
        for(int i=0;i<n;i++){
            unordered_map<double,int> line;
            double m =0.0;
            for(int j=i+1;j<n;j++){
             double x = (points[i][0]-points[j][0]);
             double y = (points[i][1]-points[j][1]);
             
             if(x==0)m=INT_MAX ;
                
             else m= y/x ;
                
             line[m] += 1;
             max_c = max(max_c,line[m]);
            }
        }
        return max_c+1;
    }
};