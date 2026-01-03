class Solution {
public:
    int answer(long long n){
        if(n==1) return 0;
        if(n%2==0) return 1+answer(n/2);
        else return 1+min(answer(n+1) , answer(n-1));
    }
    int integerReplacement(int n) {
        return answer((long long)n);
    }
};