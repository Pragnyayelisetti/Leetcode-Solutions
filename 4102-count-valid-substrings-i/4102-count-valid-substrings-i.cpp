class Solution {
public:
    long long countValidSubstrings(string s) {
        long long cnt=0;
        int start=0;
        for(int i=0; i<s.size(); i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                start=i-1;
            }
            cnt+=i-start+1;
        }
        return cnt;
    }
};