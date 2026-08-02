class Solution {
public:

// if cycle is found in graph, it must be even no nodes cycle


    bool dfs(vector<vector<int>>& adj, vector<int>& colors, int color, int node){
        if(colors[node] != 0 ){
            return colors[node] == color;
        }
        colors[node] = color;
        for(int child: adj[node]){
            if(dfs(adj, colors, -1*color, child) == false){
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, 0);

        for(int i=0; i<n; i++){
            if(colors[i] == 0 && dfs(graph, colors, 1, i) == false){
                return false;
            }
        }
        return true;
    }
};