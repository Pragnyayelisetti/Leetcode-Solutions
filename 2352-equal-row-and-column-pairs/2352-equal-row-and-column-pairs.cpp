class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>>rgrid=grid;
        vector<vector<int>>cgrid;
        for(int j=0; j<grid[0].size(); j++){
            vector<int>a;
            for(int i=0; i<grid.size(); i++){
                a.push_back(grid[i][j]);
            }
            cgrid.push_back(a);
        }
        int cnt=0;
        for(int i=0; i<rgrid.size(); i++){
            for(int j=0; j<cgrid.size(); j++){
                if(rgrid[i]==cgrid[j]) cnt++;
            }
        }
        return cnt;
    }
};