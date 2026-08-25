class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>temp=board;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                int cnt=0;
                if(i!=0 && j!=0 && temp[i-1][j-1]==1) cnt++;
                if(i!=0 && temp[i-1][j]==1) cnt++;
                if(i!=0 && j!=board[i].size()-1 && temp[i-1][j+1]==1) cnt++;
                if(j!=0 && temp[i][j-1]==1) cnt++;
                if(j!=board[i].size()-1 && temp[i][j+1]==1) cnt++;
                if(j!=0 && i<board.size()-1 && temp[i+1][j-1]==1) cnt++;
                if(i<board.size()-1 && temp[i+1][j]==1) cnt++;
                if(i<board.size()-1 && j<board[i].size()-1 && temp[i+1][j+1]==1) cnt++;
                if(temp[i][j]==1){
                    if(cnt<2) board[i][j]=0;
                    else if(cnt>3) board[i][j]=0;
                }
                else{
                    if(cnt==3) board[i][j]=1;
                }
            }
        }
    }
};