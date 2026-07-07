class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s="";
        long long sum=0;
        while(n){
            int rem=n%10;
            if(rem!=0) s+=rem+'0';
            sum+=rem;
            n=n/10;
        }
        reverse(s.begin() , s.end());
        long long x=std::stoi(s);
        return 1LL*x*sum;
    }
};