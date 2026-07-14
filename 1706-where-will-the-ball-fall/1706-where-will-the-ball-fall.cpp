class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int i=0,j=0;
        int n=0;
        vector<int>ans;
        // if(grid.size()==1){
        //     ans.push_back(-1);
        //     return ans;
        // }
        while(n<grid[i].size()){
            while(i<grid.size() && j<grid[i].size()){
                if(i<grid.size()-1 && grid[i][j]==1 && j+1<grid[i].size() && grid[i][j+1]==1){
                    i++;
                    j++;
                }
                else if(i<grid.size()-1 && grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1){
                    i++;
                    j--;
                }
                else{
                    break;
                }
            }
            if(grid[i][j]==-1 && i==grid.size()-1 && j-1>=0 && grid[i][j-1] ==-1) ans.push_back(j-1);
            else if(grid[i][j]==1 && i==grid.size()-1 && j+1<grid[i].size() && grid[i][j+1]==1) ans.push_back(j+1);
            else ans.push_back(-1);
            i=0;
            n++;
            j=n;
        }
        return ans;
    }
};