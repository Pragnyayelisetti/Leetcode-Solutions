class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int cnt=0;
        if(s.size()==1) return true;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]) cnt++;
            else{
                if(cnt==k-1) return true;
                cnt=0;
            }
        }
        if(cnt==k-1) return true;
        return false;
    }
};