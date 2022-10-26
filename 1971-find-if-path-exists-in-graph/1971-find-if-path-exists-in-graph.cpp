class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        for(auto e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,0);
        stack<int> st;
        st.push(source);
        visited[source] = 1;
        
        while(!st.empty()){
            auto current = st.top();
            if(current == destination){
                return true;
            }
            st.pop();
            for(auto node:graph[current]){
                if(!visited[node]){
                    visited[node]=1;
                    st.push(node);
                }
            }
        }
    return false;
    }
};