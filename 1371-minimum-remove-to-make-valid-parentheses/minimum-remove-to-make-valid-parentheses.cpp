class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        string ans = "";
        stack<char> st;

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(s[i]);
                ans += s[i];
            }
            else if(s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                    ans += s[i];
                }
                else {
                    continue;
                }
            }
            else{
                ans += s[i];
            }
        }
        int cnt = 0;
        if(st.empty()){
            return ans;
        }
    
        cnt = st.size();
        for(int i = ans.size() - 1; i >= 0 && cnt > 0; i--){
           
            if(ans[i] == '(') {
                ans.erase(i, 1);
                cnt--;
            }
           
        }
        return ans;
    }
};