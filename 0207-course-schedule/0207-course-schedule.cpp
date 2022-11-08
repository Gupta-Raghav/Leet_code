class Solution {
public:
    bool isCycle(vector<int> adj[],vector<int> &visited, int n){
        if(visited[n]==1){
            return true;
        }
        if(visited[n]==0){
            visited[n]=1;
            for(auto edge:adj[n]){
                if(isCycle(adj,visited,edge))
                    return true;
            }
        }
        visited[n] =2;
        return false;
    }
    
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     vector<int> visited(numCourses,0);
     vector<int> adj[numCourses];
     for(auto edge: prerequisites){
         adj[edge[1]].push_back(edge[0]);
     }
        for(int i=0;i<numCourses;i++){
            if(isCycle(adj,visited,i))
                return false;
        }
        return true;
    }
};