class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0; i<grid.size(); i++){
            if(cnt%2==1) reverse(grid[i].begin() , grid[i].end());
            cnt++;
        }
        vector<int>res;
        int c=-1;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                c++;
                if(c%2==0) res.push_back(grid[i][j]);
            }
        }
        return res;
    }
};