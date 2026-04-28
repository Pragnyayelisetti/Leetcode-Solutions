class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>arr;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin() , arr.end());
        int n=arr.size();
        int mid=n/2;
        int cnt=0;
        for(int i=0; i<n; i++){
            int diff=abs(arr[i]-arr[mid]);
            if(diff%x==0) cnt+=diff/x;
            else return -1;
        }
        return cnt;
    }
};