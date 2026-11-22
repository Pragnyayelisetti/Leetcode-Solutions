class Solution {
public:
    bool checkString(string s) {
        int idx;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='b'){
                idx=i;//idx=1;
                break;
            }
        }
        int f=0;
        for(int i=idx+1; i<s.size(); i++){//i=2 
            if(s[i]=='a'){
                f=1;
                break;
            }
        }
        if(f==1) return false;
        return true;
    }
};