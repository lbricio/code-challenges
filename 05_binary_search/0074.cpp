class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int matrix_width = matrix[0].size();
        int left = 0;
        int right = (matrix.size() * matrix_width) -1;

        int x, y;
        while (left <= right) {
            int mid = (left + right)/2;
            x = mid / matrix_width;
            y = mid % matrix_width;
            if (matrix[x][y] < target) {
                left = mid+1;
            }
            else if (matrix[x][y] > target) {
                right = mid-1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
