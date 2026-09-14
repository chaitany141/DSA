class Solution {
public:

    void dfs(vector<vector<int>>& graph, int u, int v, vector<vector<int>>& ans, vector<int>& temp){
        temp.push_back(u);

        if(u == v){
            ans.push_back(temp);
        }

        else{
            for(auto &it : graph[u]){
                dfs(graph, it, v, ans, temp);
            }
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();

        int source = 0;
        int target = n - 1;

        vector<vector<int>> ans;
        vector<int> temp;

        dfs(graph, source, target, ans, temp);

        return ans;    

    }
};