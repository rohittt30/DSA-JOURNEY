class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int irow = matrix.size();
        int icol = matrix[0].size();

        int frow = icol;
        int fcol = irow;

        vector<vector<int>> result(frow , vector<int>(fcol,0));
        for(int i = 0 ; i<frow ; i++){
            for(int j = 0 ; j<fcol ; j++){
                result[i][j]= matrix[j][i];
            }
        }
        return result;


        
    }
};