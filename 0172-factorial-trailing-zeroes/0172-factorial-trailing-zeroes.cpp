class Solution {
public:
    int trailingZeroes(int n) {
        int p=5;
        int maxi=0;
        while(p<=n){
            maxi+=n/p;//1
            p*=5;//25
        }
        return maxi;
    }
};