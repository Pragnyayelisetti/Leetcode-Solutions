class Solution {
public:
    int totalMoney(int n) {
        int i=1;
        int cnt=0;
        int d=1;
        while(n>0){//2>0
           cnt+=i;
           i++;
           n--;
           d++;
           if(d%7==1){
                i=d/7+1;
           }
        }
        return cnt;
    }
};