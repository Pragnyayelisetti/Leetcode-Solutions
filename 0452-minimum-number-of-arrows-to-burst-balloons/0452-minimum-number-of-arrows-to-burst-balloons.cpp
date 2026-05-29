class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        vector<vector<int>>arr;
        arr.push_back(points[0]);
        for(int i=1; i<points.size(); i++){
            if(points[i][0]<=arr.back()[1]){
                arr.back()[0]=min(arr.back()[0] , points[i][0]);
                arr.back()[1]=min(arr.back()[1] , points[i][1]);
            }
            else arr.push_back(points[i]);
        }
        return arr.size();
    }
};