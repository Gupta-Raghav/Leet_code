class Solution {
public:
    void DFS(vector<vector<char>>& grid,int i, int j, int row, int col){
        
        //base condition when we are either going out or not on land.
        if(i<0 || j<0|| i>(row-1) || j >(col-1) || grid[i][j]!='1'){
            return;
        }
        
        if(grid[i][j]=='1'){
            grid[i][j] = '0'; // to eliminate duplicate counting or to avoid not checking for the visited element.
            DFS(grid, i+1,j,row,col);//right side traversal 
            DFS(grid, i-1,j,row,col); //left side traversal
            DFS(grid, i,j+1,row,col); //upward side traversal
            DFS(grid, i,j-1,row,col); //downward side traversal
        }
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFS(grid, i,j,r,c);
                }
            }
        }
        return count;
    }
};