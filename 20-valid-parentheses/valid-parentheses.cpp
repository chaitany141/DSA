class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;

        for(int i = 0; i<n; i++){
            if(s[i] == '(') st.push(s[i]);
            if(s[i] == ')'){
                if(st.empty() || st.top() != '(') return false;
                st.pop();
            }

            if(s[i] == '{') st.push(s[i]);
            if(s[i] == '}'){
                if(st.empty() || st.top() != '{') return false;
                st.pop();
            }

            if(s[i] == '[') st.push(s[i]);
            if(s[i] == ']'){
                if(st.empty() || st.top() != '[') return false;
                st.pop();
            }

        }
        if(st.empty()) return 1;
        return 0;
    }
};