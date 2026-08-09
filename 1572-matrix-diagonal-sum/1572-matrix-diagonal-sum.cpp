class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0 ;
        int rows= mat.size();
        int col = mat[0].size();
        for(int i = 0 ; i<rows ; i++){
            sum = sum + mat[i][i];
        }
        for(int i = 0; i<rows ; i++){
            sum = sum+ mat[i][rows-i-1];
        }
        if(rows&1){
            sum = sum - mat[rows/2][col/2 ];

        }
        return sum;

        
    }
};