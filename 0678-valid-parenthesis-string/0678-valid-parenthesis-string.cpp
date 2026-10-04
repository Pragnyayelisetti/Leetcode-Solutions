class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int close=0;
        int star=0;
        for(char ch:s){
            if(ch=='(') open++;
            else if(ch==')') close++;
            else star++;
            if(close>open+star) return false;
        }
        open=0;
        close=0;
        star=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            else star++;
            if(open>close+star) return false;
        }
        return true;
    }
};