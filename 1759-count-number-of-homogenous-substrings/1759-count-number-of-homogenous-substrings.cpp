class Solution {
public:
    int countHomogenous(string s) {
        int start=0;
        int cnt=0;
        for(int end=0; end<s.size(); end++){
            if(s[start]!=s[end]){
                int n=end-start;
                cnt+=(1LL*n*(n+1)/2)%1000000007;
                start=end;
            }
        }
        int n=s.size()-start;
        cnt+=(1LL*n*(n+1)/2)%1000000007;
        return cnt;
    }
};