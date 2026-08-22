class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(int k = 0; k<n; k++){
            int i = 0, j = n - 1;
            while(i <= j){
                // swap i, j
                int temp = image[k][i];
                image[k][i] = image[k][j];
                image[k][j] = temp;
                i++;
                j--;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};