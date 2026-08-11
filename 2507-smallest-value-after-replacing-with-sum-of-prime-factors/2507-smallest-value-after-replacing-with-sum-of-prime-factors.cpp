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
            unordered_map<int,int>freq;
            int x=n;//50
            //freq[prime[n]]++;//2 ,
            while(x>1){
                freq[prime[x]]++;
                x=x/prime[x];
            } 
            int sum=0;
            for(auto it:freq){
                sum+=it.second*it.first;
            }
            //cout<<sum<<endl;
            if(sum==n) break;
            n=sum;
            //freq[x]++;
        }
        return n;
    }
};