class Solution {
public:
    int dp[2001][2001];
    bool solve(string &s, string &p, int i, int j){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=s.size() and j>=p.size()){
            return true;
        }
        if(i==s.size()){
            if(j<p.size()){
                while(j<p.size()){
                    if(p[j]!='*') return false;
                    j++;
                }
            }
            return true;
        }
        if(j==p.size()) return false;
        if(s[i]==p[j]){
            return dp[i][j]=solve(s,p,i+1,j+1);
        }
        if(p[j]=='?'){
            return dp[i][j]=solve(s, p, i+1, j+1);
        }
        if(p[j]=='*'){
            return dp[i][j]=solve(s,p,i,j+1) || solve(s,p,i+1,j);
        }
        return false;
    }
    bool isMatch(string s, string p) {
        memset(dp,-1, sizeof(dp));
        return solve(s,p,0,0);
        return 0;
    }
};