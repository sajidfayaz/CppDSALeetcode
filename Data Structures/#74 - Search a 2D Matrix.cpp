bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i=matrix[0].size() - 1;
    int idx=0;
    for(int k=0; k<matrix.size(); k++) {
        if(matrix[k][i] == target) {
            return true;
        } else if(matrix[k][i] > target) {
            idx = k;
            break;
        }
    }
    
    for(int x=0; x<matrix[0].size(); x++) {
        if(matrix[idx][x] == target) {
            return true;
        }
    }
    
    return false;
}