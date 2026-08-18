class Solution {
public:
    int mySqrt(int x) {
        long long res;
        if(x==0 || x==1){
            return x;
        }
        for(long long i=1; i*i<=x; i++){
            res=i;
        }
        return res;
    }
};