class Solution {
public:
    int dfs(int n, int parent, vector<vector<int>> &adj,  vector<bool> &hasApple ){
        int tTime = 0, cTime = 0;
        for(auto child: adj[n]){
            if(child == parent) continue;
            cTime = dfs(child, n, adj,hasApple);
            
            if(cTime || hasApple[child]) tTime += cTime +2;
        }
        return tTime; 
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        for(auto &edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
         return dfs(0,-1,adj,hasApple);
    }
};