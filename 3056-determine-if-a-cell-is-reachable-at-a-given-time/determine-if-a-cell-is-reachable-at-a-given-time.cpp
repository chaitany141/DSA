class Solution {
public:
    bool isReachableAtTime(int x, int y, int x1, int y1, int t) {
        int minDist = max(abs(x - x1), abs(y - y1));

        if(x == x1 && y == y1 && t == 1) return 0; 
        return t >= minDist;

        
    }
};