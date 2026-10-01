class Solution {
public:
    int maxHeightOfTriangle(int redx, int bluex) {

        // Red starts
        int red = redx;
        int blue = bluex;

        int cnt = 1;
        int ans = 0;

        while (true) {
            if (red < cnt)
                break;

            red -= cnt;
            ans++;
            cnt++;

            if (blue < cnt)
                break;

            blue -= cnt;
            ans++;
            cnt++;
        }

        // Blue starts
        red = redx;
        blue = bluex;

        int cnt1 = 1;
        int ans1 = 0;

        while (true) {
            if (blue < cnt1)
                break;

            blue -= cnt1;
            ans1++;
            cnt1++;

            if (red < cnt1)
                break;

            red -= cnt1;
            ans1++;
            cnt1++;
        }

        return max(ans, ans1);
    }
};

