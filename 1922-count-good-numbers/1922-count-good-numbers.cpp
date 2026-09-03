class Solution {
public:
    int countGoodNumbers(long long n) {
        // 0 2 4 6 8
        // 02 03 05 07 22 23 25 27 4
        // 020 022 024 026
        // _5 _4 _5 _4
        long long e=(n+1)/2;
        long long o=n-(n+1)/2;
        long long ans= 1;
        long long x=5;
        while(e){
            if(e%2==1){
                ans*=x;
                ans%=1000000007;
            }
            x*=x;
            x%=1000000007;
            e/=2;
        }
        ans=ans%1000000007;
        x=4;
        while(o){
            if(o%2==1){
                ans*=x;
                ans%=1000000007;
            }
            x*=x;
            x%=1000000007;
            o/=2;
        }
        return ans;
        return 0;
    }
};