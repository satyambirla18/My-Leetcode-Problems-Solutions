class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row_idx, col_idx, mid;
        int s = 0;
        int e = n*m-1;

        while(s <= e){
            mid = s + (e - s)/2;
            row_idx = mid / m;
            col_idx = mid % m;
            if(matrix[row_idx][col_idx] == target) return 1;
            else if(matrix[row_idx][col_idx] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return 0;
    }
};