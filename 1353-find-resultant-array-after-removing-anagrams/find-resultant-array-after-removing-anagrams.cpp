class Solution {
public:
    vector<string> removeAnagrams(vector<string>& arr) {
        int i = 1;
        while(i < arr.size()){
            string a = arr[i];
            string b = arr[i - 1];

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if(a == b){
                arr.erase(arr.begin() + i);
            }
            else i++;
        }
        return arr;
    }
};