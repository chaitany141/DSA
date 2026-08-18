class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();

        vector<int> vis(2001, 0);

        for(int i = 0; i<n; i++){
            int temp = arr[i] + 1000;
            vis[temp]++;
        }
        sort(vis.begin(), vis.end());

        for(int i = 0; i<2000; i++){
            if(vis[i] != 0 && vis[i] == vis[i + 1]){
                return false;
            }
        }
        return true;


    }
};