class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>arr(m , vector<int>(n , 0));
        for(int i=0; i<indices.size(); i++){
            int r=indices[i][0];
            int c=indices[i][1];
            for(int j=0; j<n; j++) arr[r][j]++;
            for(int j=0; j<m; j++) arr[j][c]++;
        }
        int cnt=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr[i].size(); j++){
                if(arr[i][j]%2!=0) cnt++;
            }
        }
        return cnt;
    }
};