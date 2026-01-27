class Solution {
public:
    bool isPrime(int n){
        if(n==0 || n==1) return false;
        if(n==2 || n==5) return true;
        if(n%2==0 || n%5==0) return false;
        for(int i=3; i*i<=n; i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long psum=0,sum=0;
        for(int i=0; i<nums.size(); i++){
            if(isPrime(i)){
                psum+=nums[i];
            }
            else sum+=nums[i];
        }
        return abs(psum-sum);
    }
};