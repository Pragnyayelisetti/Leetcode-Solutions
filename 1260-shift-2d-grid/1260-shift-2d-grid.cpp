class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        k=k%(m*n);
        vector<vector<int>>arr(m , vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int p=i*n+j;
                int ne=(p+k)%(m*n);
                int x=ne/n;
                int y=ne%n;
                arr[x][y]=grid[i][j];
            }
        }
        return arr;
    }
};