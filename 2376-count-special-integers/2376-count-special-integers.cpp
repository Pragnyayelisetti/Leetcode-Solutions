class Solution {
public:
    string s;
    int dp[10][2][1024][2];
    int solve(int pos , int tight , int mask , int started){
        if(pos==s.size()) return started;
        if(dp[pos][tight][mask][started]!=-1) return dp[pos][tight][mask][started];
        int limit;
        if(tight) limit=s[pos]-'0';
        else limit=9;
        int ans=0;
        for(int i=0; i<=limit; i++){
            int newtight=tight && limit==i;
            if(!started && i==0) ans+=solve(pos+1 , newtight , mask , 0);
            else{
                if((mask & (1<<i))==0) ans+=solve(pos+1 , newtight, (mask|(1<<i)) , 1);
                else continue;
            }
        }
        return dp[pos][tight][mask][started]=ans;
    }
    int answer(int n){
        return solve(0 , 1 , 0 , 0);
    }
    int countSpecialNumbers(int n) {
        s=to_string(n);
        memset(dp , -1 , sizeof(dp));
        return answer(n);
    }
};