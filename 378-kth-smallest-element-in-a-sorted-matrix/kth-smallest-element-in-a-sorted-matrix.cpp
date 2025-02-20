#include <vector>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), left = matrix[0][0], right = matrix[n - 1][n - 1];

        while (left < right) {
            int mid = left + (right - left) / 2, count = 0, row = n - 1, col = 0;

            while (row >= 0 && col < n) {
                if (matrix[row][col] <= mid) {
                    count += row + 1; 
                    col++;  
                } else {
                    row--;  
                }
            }

            if (count < k) left = mid + 1;
            else right = mid;
        }
        return left;
    }
};
