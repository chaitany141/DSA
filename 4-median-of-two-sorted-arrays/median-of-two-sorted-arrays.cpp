class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();

        vector<int> arr;
        
        int i = 0; 
        int j = 0;
        while(i < m && j < n){
            if(arr1[i] > arr2[j]){
                int mini = arr2[j];
                arr.push_back(mini);
                j++;
            }
            else if(arr1[i] < arr2[j]){
                int mini = arr1[i];
                arr.push_back(mini);
                i++;
            }
            else {
                arr.push_back(arr1[i]);
                arr.push_back(arr2[j]);
                i++;
                j++;
            }
        }
        while(i < m) {
            arr.push_back(arr1[i]);
            i++;
        }

        while(j < n) {
            arr.push_back(arr2[j]);
            j++;
        }

        int size = m + n;

        if(size % 2 == 0) {
            return (arr[size/2 - 1] + arr[size/2]) / 2.0;
        }

        return arr[size/2];

    }
};