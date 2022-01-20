bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map <int,unordered_map <char,int>> rows;
    unordered_map <int,unordered_map <char,int>> cols;
    unordered_map <int,unordered_map <char,int>> grid;  //Grid Number
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]!='.')
            {
                    rows[i][board[i][j]]++;
                    cols[j][board[i][j]]++;
                    grid[(i/3)*3+(j/3)][board[i][j]]++;
                    if(rows[i][board[i][j]]>1 || cols[j][board[i][j]]>1 ||                                      grid[(i/3)*3+(j/3)][board[i][j]]>1)
                    return false;
            }
        }
    }
    return true;
}