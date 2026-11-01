class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();

        int cnt = 0;

        if(colors[0] == 0 && colors[1] == 1 && colors[n - 1] == 1) cnt++;
        if(colors[0] == 1 && colors[1] == 0 && colors[n - 1] == 0) cnt++;

        if(colors[0] == 0 && colors[n - 1] == 1 && colors[n - 2] == 0) cnt++;
        if(colors[0] == 1 && colors[n - 1] == 0 && colors[n - 2] == 1) cnt++;

        if(n == 3) {
            if(colors[0] == 0 && colors[1] == 1 && colors[n - 1] == 0) return 1;
        }

        
        for(int i = 0; i < n - 2; i++){
            if(colors[i] == 0 && colors[i + 1] == 1 && colors[i + 2] == 0) cnt++;
            if(colors[i] == 1 && colors[i + 1] == 0 && colors[i + 2] == 1) cnt++;
        }

        
        
        return cnt;
    }
};