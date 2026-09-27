class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<int> st;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(') {
                st.push(i);
            }
            else if(s[i] == ')'){
                int temp = st.top();
                st.pop();

                reverse(s.begin() + temp + 1, s.begin() + i);

                s.erase(s.begin() + i);
                s.erase(s.begin() + temp);

                 i -= 2;
            }
           
        }

      
        return s;



    }
};