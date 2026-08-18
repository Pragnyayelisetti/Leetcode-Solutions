class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0) return 0;
        int fcnt=0,tcnt=0;
        for(int i=1; i<=n; i++){
            int x=i;
            while(x){
                if(x%5==0){
                    fcnt++;
                    x=x/5;
                }
                else if(x%2==0){
                    tcnt++;
                    x=x/2;
                }
                else break;
            }
        }
        return min(fcnt,tcnt);
    }
};