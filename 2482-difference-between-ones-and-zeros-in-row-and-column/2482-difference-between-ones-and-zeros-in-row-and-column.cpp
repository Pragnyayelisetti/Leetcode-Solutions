class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>diff(grid.size() , vector<int>(grid[0].size()));
        vector<int>a,b;
        for(int i=0; i<grid.size(); i++){
            int onerow=0,zerorow=0;
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==0) zerorow++;
                else onerow++;
            }
            a.push_back(onerow-zerorow);
        }
        for(int j=0; j<grid[0].size(); j++){
            int onecol=0,zerocol=0;
            for(int i=0; i<grid.size(); i++){
                if(grid[i][j]==0) zerocol++;
                else onecol++;
            }
            b.push_back(onecol-zerocol);
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                diff[i][j]=a[i]+b[j];
            }
        }
        return diff;
    }
};