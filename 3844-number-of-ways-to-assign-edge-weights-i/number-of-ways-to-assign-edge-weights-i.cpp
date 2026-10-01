class Solution {
public:

    long long MOD = 1e9 + 7;

    long long power(long long base, int exp) {
        long long ans = 1;

        while (exp > 0) {
            if (exp & 1)
                ans = (ans * base) % MOD;

            base = (base * base) % MOD;
            exp >>= 1;
        }

        return ans;
    }
    
    int getMaxDepth(unordered_map<int, vector<int>>& adj, int node, int parent){
        int depth = 0;
        for(int &ngbr: adj[node]){
            if(ngbr == parent) continue;

            depth = max(depth, getMaxDepth(adj, ngbr, node ));
        }

        return depth + 1;
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;

        for(auto &edge: edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int d = getMaxDepth(adj, 1, -1);

        return power(2, d - 2);
    }
};