class Solution {
public:
    bool sumGame(string s) {
        int n = s.size();
        int sum1 = 0, sum2 = 0;

        int cnt1 = 0, cnt2 = 0;

        for(int i = 0; i<n / 2; i++){
            if(s[i] == '?'){
                cnt1++;
            }
            else
                sum1 += s[i] - '0';
        }
        for(int i = (n / 2) ; i<n ; i++){
            if(s[i] == '?'){
                cnt2++;
            }
            else
                sum2 += s[i] - '0';
        }
        if((cnt1 + cnt2) % 2 == 1) return 1;

        int left = sum1*2 + 9 * cnt1;
        int right = 2*sum2 + 9* cnt2;

        if(left == right) return 0;


        // if(sum1 == sum2 && cnt1 == cnt2){
        //     return 0;
        // }

        // if(sum1 > sum2 && cnt2 > cnt1){
        //     int diff = abs(sum1 - sum2);
        //     int diff2 = abs(cnt1 - cnt2);

        //     if(diff <= 9*diff2) return false;
        // }
        // if(sum2 > sum1 && cnt1 > cnt2){
        //     int diff = abs(sum1 - sum2);
        //     int diff2 = abs(cnt1 - cnt2);

        //     if(diff2 <= 9*diff) return false;
        // }
        return 1;


    }
};