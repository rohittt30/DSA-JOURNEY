class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int m = matrix.size();
        int n = matrix[0].size();


        int startingrow = 0;
        int startingcol = 0;
        int endingrow = m-1;
        int endingcol = n-1;

        while(startingrow <= endingrow && startingcol <= endingcol){

            //intial row print
            for(int col = startingcol ; col<=endingcol ; col++){
                ans.push_back(matrix[startingrow][col]);
                
            }
            startingrow ++;
            // for the first col;
            for(int row = startingrow; row<=endingrow ; row ++){
                ans.push_back(matrix[row][endingcol]);
                
            }
            endingcol--;
            // for the last row
            if(startingrow <= endingrow){
                for(int col = endingcol ; col >=startingcol ; col--){
                    ans.push_back(matrix[endingrow][col]);
                    
                }
                endingrow--;
            }
            //for the first upward column
            if(startingcol <=endingcol){
                for(int row = endingrow; row >=startingrow ;row--  ){
                    ans.push_back(matrix[row][startingcol]);
                    
                }
                startingcol++;
            }
        



        


        }
        return ans;
    
        
    }
};