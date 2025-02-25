class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int rowmajor = 0;
        int colmajor = cols - 1;

        while (rowmajor < rows && colmajor >= 0) {
            int current = matrix[rowmajor][colmajor];

            if (current == target) {
                return true;  
            }
            if (current < target) {
                rowmajor++;  
            } else {
                colmajor--;   
            }
        }
        return false;   
    }
};
