class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>arr(n , vector<int>(n,0));
        for(int i=0; i<queries.size(); i++){
            int r1=queries[i][0];//1
            int c1=queries[i][1];//1
            int r2=queries[i][2];//2
            int c2=queries[i][3];//2
            int r=r1,c=c1;
            while(r<=r2){
                int temp=c;
                while(temp<=c2){
                    arr[r][temp]++;
                    temp++;
                }
                r++;
            }
        }
        return arr;
    }
};