class Solution {
public:
    void solve(string &s , int i,int k){
        if(s.size()>=k){
            return;
        }
        if(i==1){
            s+='b';//ab
            solve(s , i+1 , k);
        }
        else{
            s+=s[i-1];
            s+=(s[i-1]+1);//abbccd
            solve(s , i+1 , k);
        }
    }
    char kthCharacter(int k) {
        string s="a";
        solve(s , 1 , k);
        return s[k-1];
    }
};