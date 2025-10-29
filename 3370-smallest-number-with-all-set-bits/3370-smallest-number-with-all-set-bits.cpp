class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        int i=0;
        while(n>pow(2 , i)){
            i++;
        }
        int ans=pow(2,i);
        return ans-1;
    }
};