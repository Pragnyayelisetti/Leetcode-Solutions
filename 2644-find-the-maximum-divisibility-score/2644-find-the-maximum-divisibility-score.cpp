class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans=INT_MAX,maxi=-1;
        for(int d:divisors){
            int cnt=0;
            for(int num:nums){
                if(num%d==0) cnt++;
            }
            if(cnt>maxi){
                maxi=cnt;
                ans=d;
            }
            else if(cnt==maxi){
                ans=min(ans , d);
            }
        }
        return ans;
    }
};