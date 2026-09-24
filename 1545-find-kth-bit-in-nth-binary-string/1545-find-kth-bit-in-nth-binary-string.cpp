class Solution {
public:
    string invert(string &s){
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    string rev(string s){
        reverse(s.begin() , s.end());
        return s;
    }
    string solve(string &s, int n){
        if(n==1) return s=s+'0';
        s=solve(s,n-1);
        string a=s;
        string b=a;
        return s=a+'1'+rev(invert(b));
    }
    char findKthBit(int n, int k) {
        string s="";
        string ans=solve(s,n);
        return ans[k-1];
    }
};