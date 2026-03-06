class Solution {
public:
    bool checkOnesSegment(string s) {
        int f=0,f1=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') f=1;
            else if(s[i]=='0' && f==1) f1=1;
            if(s[i]=='1' && f1==1) return false;
        }
        return true;
    }
};