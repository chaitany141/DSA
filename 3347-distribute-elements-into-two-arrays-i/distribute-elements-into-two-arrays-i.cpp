class Solution {
public:
    vector<int> resultArray(vector<int>& arr) {
        int n = arr.size();

        vector<int> arr1;
        vector<int> arr2;

        int i = 0;

        arr1.push_back(arr[i]);
        arr2.push_back(arr[i + 1]);

        i+= 2;
        while(i < n){

            if(arr2[arr2.size() - 1] < arr1[arr1.size() - 1]){
                arr1.push_back(arr[i]);
            }

            else{
                arr2.push_back(arr[i]);
            }
            i++;
        }
        
        for(int i = 0; i<arr2.size(); i++){
            arr1.push_back(arr2[i]);
        }

        return arr1;
    }
};