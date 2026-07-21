class Solution {
public:
    vector<string>str;
    void solve(int n ,char prev, string &s){
        if(s.size()==n){
            str.push_back(s);
            return;
        }
        s+='1';
        solve(n, '1' , s);
        s.pop_back();
        if(prev!='0'){
            s+='0';
            solve(n , '0' , s);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        string s="";
        solve(n , '2' , s);
        return str;
    }
};