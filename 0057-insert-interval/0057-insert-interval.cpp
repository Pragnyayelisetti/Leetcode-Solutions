class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin() , intervals.end());
        vector<vector<int>>arr;
        arr.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<=arr.back()[1]){
                arr.back()[0]=min(intervals[i][0] , arr.back()[0]);
                arr.back()[1]=max(intervals[i][1] , arr.back()[1]);
            }
            else{
                arr.push_back(intervals[i]);
            }
        }
        return arr;
    }
};