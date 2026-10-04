class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int>freq;

        for(char c : s){
            freq[c]++;
        }
        int maxVow = 0;

        for(auto &it : freq){
            if(it.first == 'a'){
                maxVow = max(maxVow, it.second);
            }
            if(it.first == 'i'){
                maxVow = max(maxVow, it.second);
            }
            if(it.first == 'e'){
                maxVow = max(maxVow, it.second);
            }
            if(it.first == 'o'){
                maxVow = max(maxVow, it.second);
            }
            if(it.first == 'u'){
                maxVow = max(maxVow, it.second);
            }
        }

        int maxCon = 0;
        for(auto &it : freq){
            if(it.first != 'a'&& it.first != 'i'&& it.first != 'u' && it.first != 'e' && it.first != 'o' ){
                maxCon = max(maxCon, it.second);
            }
        }
        return maxCon + maxVow;

    }
};