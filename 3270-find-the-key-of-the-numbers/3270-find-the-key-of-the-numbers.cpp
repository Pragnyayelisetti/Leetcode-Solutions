class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int n=0;
        while(num1 || num2 || num3){
            int mini=min(num1%10 , min(num2%10 , num3%10));
            n=n*10+mini;
            num1=num1/10;
            num2=num2/10;
            num3=num3/10;
        }
        return n;
    }
};