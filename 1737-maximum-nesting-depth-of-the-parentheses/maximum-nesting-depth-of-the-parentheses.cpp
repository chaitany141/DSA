class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans = 0;
        int cnt = 0;
        stack<char> st;

        for(int i = 0; i<n; i++){
            if(s[i] == '(') {
                st.push(s[i]);
                cnt++;
            }
            if(s[i] == ')'){
                st.pop();
                ans = max(ans, cnt);
                cnt--;
            }

        }
        return ans;
    }
};