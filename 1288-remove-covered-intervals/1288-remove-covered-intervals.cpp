class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int cnt=1;
        sort(intervals.begin() , intervals.end() , [](auto &a , auto &b){
            if(a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });
        int a=intervals[0][0];
        int b=intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(a<=intervals[i][0] && b>=intervals[i][1]){
                a=min(a , intervals[i][0]);
                b=max(b , intervals[i][1]);
            }
            else{
                a=intervals[i][0];
                b=intervals[i][1];
                cnt++;
            }
        }
        return cnt;
    }
};