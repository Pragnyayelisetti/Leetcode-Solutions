class Solution {
public:
    vector<string> str;
    bool isValid(string &s){
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') cnt++;
            else cnt--;
            if(cnt<0) return false;
        }
        return cnt==0;
    }
    void solve(int n , string& s){
        if(s.size()==2*n){
            if(isValid(s)){
                str.push_back(s);
            }
            return;
        }
        s.push_back('(');
        solve(n , s);
        s.pop_back();
        s.push_back(')');
        solve(n , s);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        solve(n , s);
        return str;
    }
};