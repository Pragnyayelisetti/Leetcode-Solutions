class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            sort(grid[i].rbegin(), grid[i].rend());
        }
        int ans=0;
        for(int j=0; j<grid[0].size(); j++){
            int maxi=INT_MIN;
            for(int i=0; i<grid.size(); i++){
                maxi=max(maxi , grid[i][j]);
            }
            ans+=maxi;
        }
        return ans;
    }
};