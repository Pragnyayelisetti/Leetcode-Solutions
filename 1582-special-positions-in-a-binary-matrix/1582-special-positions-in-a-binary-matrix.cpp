class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int cnt=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(mat[i][j]==1){
                    int rc=0,cc=0;
                    for(int k=0; k<col; k++) if(mat[i][k]==1) rc++;
                    for(int k=0; k<row; k++) if(mat[k][j]==1) cc++;
                    if(rc==1 && cc==1) cnt++;
                }
            }
        }
        return cnt;
    }
};