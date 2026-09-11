class Solution {
public:
    set<int> st;

    void solve(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) continue;

            for (int j = 0; j < n; j++) {
                if (j == i) continue;

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;

                    if (arr[k] % 2 != 0) continue;

                    int temp = arr[i] * 100 + arr[j] * 10 + arr[k];

                    st.insert(temp);
                }
            }
        }
    }

    int totalNumbers(vector<int>& arr) {
        solve(arr);
        return st.size();
    }
};