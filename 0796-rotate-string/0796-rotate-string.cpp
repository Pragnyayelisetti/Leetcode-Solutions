class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        if(s.size()>goal.size() || s.size()<goal.size()) return false;
        for(int i=0; i<s.size(); i++){
            char ch=s[0];
            s.erase(0,1);
            s+=ch;
            if(s==goal) return true;
        }
        return false;
    }
};