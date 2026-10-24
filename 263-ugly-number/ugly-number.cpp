class Solution {
public:

    bool isUgly(int n) {
        vector<int> prime;

        if(n == 1) return 1;
        if(n <= 0) return 0;
        if(n == 2147483647) return 0;

        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                prime.push_back(i);
                n /= i;
            }
        }
        if (n > 1) {
            prime.push_back(n);
        }


        for(int i = 0; i < prime.size(); i++){
            if(prime[i] != 2 && prime[i] != 3 && prime[i] != 5){
                return 0;
            }
        }
        return 1;
    }

    
};