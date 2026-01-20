class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0; i<points.size(); i++){
            int x1=points[i][0];
            int y1=points[i][1];
            if(x==x1 || y==y1){
                int ans=abs(x-x1)+abs(y-y1);
                if(mini>ans){
                    mini=ans;
                    idx=i;
                }
            }
        }
        return idx;
    }
};