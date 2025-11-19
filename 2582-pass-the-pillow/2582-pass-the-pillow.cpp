class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n) return time+1;
        int t=time/(n-1);//2
        //11 and 5
        if(t%2!=0){
            int r=time%(n-1);
            return n-r;
        }
        else{
            int r=time%(n-1);//2
            return r+1;
        }
    }
};