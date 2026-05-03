class Solution {
public:
    int longestSubsequence(string s, int k) {
        int j=0;
        long long num=0;
        int idx=-1;
        for(int i=s.size()-1; i>=0; i--){
            int x=s[i]-'0';
            if(num+x*pow(2,j)<=k){
                num += x*pow(2,j);
                j++;
            }
            else{
                idx=i;
                break;
            }
        }
        if(idx!=-1){
            for(int i=idx; i>=0; i--){
                if(s[i]=='0') j++;
            }
        }
        return j;
    }
};