class Solution {
public:
    int reversenum(int num){
        int ans=0;
        while(num){
            ans=ans*10+num%10;
            num=num/10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n-reversenum(n));
    }
};