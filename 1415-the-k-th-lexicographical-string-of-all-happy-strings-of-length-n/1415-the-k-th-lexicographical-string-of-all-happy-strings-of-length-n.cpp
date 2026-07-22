class Solution {
public:
    vector<string> str;
    void solve(int n , string &s){
        if(s.size()==n){
            str.push_back(s);
            return;
        }
        for(char ch='a'; ch<='c'; ch++){
            if(s.empty() || s.back()!=ch){
                s+=ch;
                solve(n , s);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        string s="";
        solve( n , s);
        if(k>str.size()) return "";
        return str[k-1];
    }
};