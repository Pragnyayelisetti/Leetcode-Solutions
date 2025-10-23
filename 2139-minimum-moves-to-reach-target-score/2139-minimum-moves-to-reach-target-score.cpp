class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt=0;
        int x=0;
        while(maxDoubles>0 && target>1){
            if(target%2!=0) cnt++;//1
            target=target/2;//2
            maxDoubles--;//2
            x++;//2
        }
        return cnt+target-1+x;
    }
};