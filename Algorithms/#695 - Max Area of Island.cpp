class Solution {
    int dfs(vector<vector<int>>& grid, int i, int j) {
        if(i<0 || i >= grid.size() || j<0 || j >= grid[0].size() || grid[i][j] == 0)                return 0;
        
        
        int sum = 1;
        grid[i][j] = 0;
        
        sum += dfs(grid, i-1, j); // for top
        sum += dfs(grid, i+1, j); // for bottom
        sum += dfs(grid, i, j+1); // for right
        sum += dfs(grid, i, j-1); // for left
            
    return sum;
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxSum = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    maxSum = max(maxSum, dfs(grid, i, j));
                }
            }  
        }
        
        return maxSum;
    }
};
