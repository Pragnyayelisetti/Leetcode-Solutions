class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        if((n%2==0 && n!=2 )|| (n%5==0 && n!=5)) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int count(int n){
        int cnt=0;
        while(n){
            int rem=n%2;
            if(rem==1) cnt++;
            n=n/2;
        }
        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left; i<=right; i++){
            int n=count(i);
            if(isPrime(n)) cnt++;
        }
        return cnt;
    }
};