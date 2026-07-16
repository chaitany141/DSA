class Solution {
public:
    long long gcdSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> preGcd;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);

            int Gcd = gcd(maxi, arr[i]);
            preGcd.push_back(Gcd);
        }

        sort(preGcd.begin(), preGcd.end());
        long long sum = 0;
        for(int i=0; i<n / 2; i++){
            int GCD = gcd(preGcd[i], preGcd[n - i - 1]);
            sum += GCD;
        }
        return sum;
        
    }
};