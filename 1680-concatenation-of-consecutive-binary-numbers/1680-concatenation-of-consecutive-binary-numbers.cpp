class Solution {
public:
    string to_binary(int n){
        string s;
        while(n){
            s+=(n%2) +'0';
            n=n/2;
        }
        reverse(s.begin() , s.end());
        return s;
    }
    int concatenatedBinary(int n) {
        string s;
        for(int i=1; i<=n; i++){
            s+=to_binary(i);
        }
        // for(int i=0; i<s.size(); i++) cout<<s[i];
        // return 0;
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum =(sum*2 + (s[i]-'0'))%1000000007;
        }
        return sum;
    }
};