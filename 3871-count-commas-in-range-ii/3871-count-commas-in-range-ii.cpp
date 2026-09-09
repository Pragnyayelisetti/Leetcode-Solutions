class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        else{
            long long ans=0;
            if(n<=999999LL) ans=n-999LL;
            else if(n<=999999999LL) ans =(999999LL-999LL)+2*(n-999999LL);
            else if(n<=999999999999LL) ans =(999999LL-999LL)+2*(999999999LL-999999LL)+3*(n-999999999LL);
            else if(n<=999999999999999LL)ans=(999999LL-999LL)+2*(999999999LL-999999LL)+3*(999999999999LL-999999999LL)+4*(n-999999999999LL);
            else ans=(999999LL-999LL)+2*(999999999LL-999999LL)+3*(999999999999LL-999999999LL)+4*(999999999999999LL-999999999999LL)+5*(n-999999999999999LL);
            return ans;
        }
    }
};