class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();

        int rowmajor = 0;
        int colmajor = col-1;

        while ( rowmajor < row && colmajor >= 0 ) {

            int element = matrix [rowmajor][colmajor];

            if ( element == target ){
                return 1;
            }
            if ( element < target ){
                rowmajor++;
            }
            else {
                colmajor--;
            }
        }
        return 0;    
    }
};