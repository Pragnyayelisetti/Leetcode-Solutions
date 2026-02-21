class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        for(int i=0; i<2; i++){
            if(points[i][0]==points[i+1][0] && points[i][1]==points[i+1][1]) return false;
        }
        int x1=points[0][0];
        int y1=points[0][1];
        int x2=points[1][0];
        int y2=points[1][1];
        int x3=points[2][0];
        int y3=points[2][1];
        return !(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0);
    }
};