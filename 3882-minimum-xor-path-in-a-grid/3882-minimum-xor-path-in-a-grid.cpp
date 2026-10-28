class Solution {
public:
    vector<vector<vector<int>>>dp;
    int solve(vector<vector<int>>& grid, int i, int j, int x){
        if (i>=grid.size() || j>=grid[0].size()) {
            return INT_MAX;
        }
        if(dp[i][j][x]!=-1) return dp[i][j][x];
        if(i==grid.size()-1 and j==grid[0].size()-1){
            return dp[i][j][x]=x;
        }
        int right=INT_MAX, down=INT_MAX;
        if(j+1<grid[0].size()) right=solve(grid, i, j+1, x^grid[i][j+1]);
        if(i+1<grid.size()) down=solve(grid, i+1, j, x^grid[i+1][j]);
        return dp[i][j][x]=min(right, down);
    }
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        dp.assign(m, vector<vector<int>>(n, vector<int>(1024, -1)));
        return solve(grid,0, 0, grid[0][0]);
    }
};