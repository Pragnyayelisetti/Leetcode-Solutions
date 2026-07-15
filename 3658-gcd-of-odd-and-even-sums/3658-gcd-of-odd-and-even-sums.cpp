class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ocnt=0,ecnt=0;
        for(int i=1; i<=n*2; i++){
            if(i%2==0) ecnt+=i;
            else ocnt+=i;
        }
        return gcd(ocnt , ecnt);
    }
};