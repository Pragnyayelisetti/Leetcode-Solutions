class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s;
        while(n){
            int rem=n%2;
            s+=rem;
            n=n/2;
        }
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]) return false;
        }
        return true;
    }
};