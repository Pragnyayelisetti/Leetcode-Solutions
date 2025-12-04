class Solution {
public:
    int countCollisions(string directions) {
        int lidx=-1;
        int ridx=-1;
        for(int i=0; i<directions.size(); i++){
            if(directions[i]=='R' || directions[i]=='S'){
                lidx=i;
                break;
            }
        }
        for(int i=directions.size()-1; i>=0; i--){
            if(directions[i]=='L' || directions[i]=='S'){
                ridx=i;
                break;
            }
        }
        if(lidx==-1 || ridx==-1 || lidx>=ridx) return 0;
        int cnt=0;
        for(int i=lidx; i<=ridx; i++){
            if(directions[i]!='S') cnt++;
        }
        return cnt;
    }
};