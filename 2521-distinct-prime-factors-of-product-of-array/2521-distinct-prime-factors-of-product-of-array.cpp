class Solution {
    vector<int>sieve=vector<int>(1001);
public:
    void SPF(){
        for(int i=0; i<=1000; i++){
            sieve[i]=i;
        }
        for(int i=2; i*i<=1000; i++){
            if(sieve[i]==i){
                for(int j=i*i; j<=1000; j+=i){
                    if(sieve[j]==j) sieve[j]=i;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        SPF();
        unordered_map<int,int>freq;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];
            while(x>1){
                freq[sieve[x]]++;
                x=x/sieve[x];
            }
        }
        return (int)freq.size();
    }
};