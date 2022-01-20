vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for(int i=1; i<=numRows; i++) {
        vector<int> temp;
        for(int j=1; j<=i; j++) {
            if(j==1) {
                temp.push_back(1);
            } else if(j==i) {
                temp.push_back(1);
            } else {
                temp.push_back(ans[i-2][j-2] + ans[i-2][j-1]);
            } 
        }
        ans.push_back(temp);
    }
return ans;
}