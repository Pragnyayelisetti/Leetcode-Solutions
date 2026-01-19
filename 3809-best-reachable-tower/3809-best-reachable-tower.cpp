class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int maxi=INT_MIN;
        vector<int>ans(2) , res(2);
        for(int i=0; i<towers.size(); i++){
            int a=abs(towers[i][0]-center[0]) + abs(towers[i][1]-center[1]);
            if(a<=radius){
                if(maxi<towers[i][2]){
                    maxi=towers[i][2];//5
                    ans[0]=towers[i][0];//1
                    ans[1]=towers[i][1];//2
                    res=ans;
                }
                else if(maxi==towers[i][2]){
                    if(towers[i][0]<ans[0] || (towers[i][0]==ans[0] && towers[i][1]<ans[1])){
                        res[0]=towers[i][0];
                        res[1]=towers[i][1];
                    }
                    else{
                        res[0]=ans[0];
                        res[1]=ans[1];
                    }
                }
            }
        }
        if(res[0]==0 && res[1]==0) return {-1,-1};
        return res; 
    }
};