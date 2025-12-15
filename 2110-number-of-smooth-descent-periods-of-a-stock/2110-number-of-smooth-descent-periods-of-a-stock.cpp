class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0,n=1;
        if(prices.size()==1) return 1;
        int f=0;
        for(int end=1; end<prices.size(); end++){
            if(prices[end-1]-prices[end]==1){
                n++;
            }
            else{
                ans+=n*(n+1)/2;//1
                n=1;
            }
        }
        ans += n*(n+1)/2;
        return ans;
    }
};