class Solution {
    vector<int>prime=vector<int>(100001);
public:
    void SPF(){
        for(int i=0; i<=1e5; i++){
            prime[i]=i;
        }
        for(int i=2; i*i<=1e5; i++){
            if(prime[i]==i){
                for(int j=i*i; j<=1e5; j+=i){
                    if(prime[j]==j) prime[j]=i;
                }
            }
        }
    }
    int smallestValue(int n) {
        SPF();
        while(prime[n]!=n){//
            int x=n;
            int sum=0;
            while(x>1){
                sum+=prime[x];
                x=x/prime[x];
            } 
            if(sum==n) break;
            n=sum;
        }
        return n;
    }
};