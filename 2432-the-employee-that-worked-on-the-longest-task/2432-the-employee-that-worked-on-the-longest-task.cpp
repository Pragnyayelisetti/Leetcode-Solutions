class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxi=logs[0][1];
        int ans=logs[0][0];
        for(int i=1; i<logs.size(); i++){
            int x=logs[i][1]-logs[i-1][1];
            if(maxi<x){
                maxi=x;
                ans=logs[i][0];
            }
            else if(maxi==x){
                ans=min(ans , logs[i][0]);
            }
        }
        return ans;
    }
};