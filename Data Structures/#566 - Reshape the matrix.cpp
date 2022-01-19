vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int rowSize = mat.size();
    int colSize = mat[0].size();
    int size = rowSize * colSize;
    vector<vector<int>> ans;
    
    if(size != r*c) {
        return mat;
    } else {
        vector<int> temp(size);
        int idx = 0;
        for(int i=0; i<rowSize; i++) {
            for(int j=0; j<colSize; j++) {
                temp[idx] = mat[i][j];
                idx++;
            }
        }

        
        int i=0, j=0;
        int it=0;
        while(i<r) {
            vector<int> v;
            while(j<c) {
                v.push_back(temp[it]);
                it++; j++;
            }
            j=0;
            ans.push_back(v);
            i++;
        }
    }
    
    return ans;
}