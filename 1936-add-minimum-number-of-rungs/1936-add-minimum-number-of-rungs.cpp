class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int p=0,cnt=0;
        if(rungs[0]>dist) cnt = (rungs[0]-p-1)/dist;
        for(int i=1; i<rungs.size(); i++){
            if(rungs[i]-rungs[p]<=dist){
                p=i;
                continue;
            }
            else cnt += (rungs[i]-rungs[p]-1)/dist;
            p=i;
        }
        return cnt;
    }
};