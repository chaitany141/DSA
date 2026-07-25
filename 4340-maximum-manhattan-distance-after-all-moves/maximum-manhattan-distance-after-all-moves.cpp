class Solution {
public:
    int maxDistance(string s) {
        int n = s.size();
        int cnt = 0;
        int cntL = 0;
        int cntR = 0;
        int cntU = 0;
        int cntD = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '_') cnt++;
            if(s[i] == 'U') cntU++;
            if(s[i] == 'D') cntD++;
            if(s[i] == 'R') cntR++;
            if(s[i] == 'L') cntL++;

        }
        int height = abs(cntU - cntD);
        int length = abs(cntR - cntL);

        return height + length + cnt;
    }
};