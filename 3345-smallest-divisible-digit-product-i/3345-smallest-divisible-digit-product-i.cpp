class Solution {
public:
    int pro(int n){
        int p=1;
        while(n){
            int rem=n%10;
            p*=rem;
            n=n/10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true){
            if(pro(n)%t==0){
                ans=n;
                break;
            }
            n+=1;
        }
        return ans;
    }
};