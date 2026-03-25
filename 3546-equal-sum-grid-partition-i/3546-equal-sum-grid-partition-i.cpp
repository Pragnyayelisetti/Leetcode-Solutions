class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long>arr;
        long long t=0;
        for(int i=0; i<grid.size(); i++){
            long long sum=0;
            for(int j=0; j<grid[i].size(); j++){
                sum += grid[i][j];
                t+=grid[i][j];
            }
            arr.push_back(sum);
        }
        long long c=0;
        for(int i=0; i<arr.size(); i++){
            c+=arr[i];
            if(c*2==t) return true;
        }
        arr.clear();
        for(int j=0; j<grid[0].size(); j++){
            long long sum=0;
            for(int i=0; i<grid.size(); i++){
                sum += grid[i][j];
            }
            arr.push_back(sum);
        }
        long long c1=0;
        for(int i=0; i<arr.size(); i++){
            c1+=arr[i];
            if(c1*2==t) return true;
        }
        return false;
    }
};