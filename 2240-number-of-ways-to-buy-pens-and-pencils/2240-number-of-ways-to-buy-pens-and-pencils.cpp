class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        /*
        x*cost1 + y*cost2 <= 20
        x = 0 ; y = 4+1 --> 5
        x = 1 ; y = 2+1 --> 3
        x = 2 ; y = 0+1 --> 1
        */
        long long i=0;
        long long ans=0;
        while(i*cost1<=total){
            long long x = (total-i*cost1)/cost2;
            ans += x+1;
            i++;
        }
        return ans;
    }
};