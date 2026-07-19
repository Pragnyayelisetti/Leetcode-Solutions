class Solution {
public:
    void solve(string s  , int i , vector<string>& arr){
        if(i>=s.size()){
            arr.push_back(s);
            return;
        }
        if(s[i]>='0' && s[i]<='9') solve(s , i+1 , arr);
        else if(s[i]>='a' && s[i]<='z'){
            string str=s;
            str[i]=toupper(str[i]);
            solve(s , i+1 , arr);
            solve(str , i+1 , arr);
        }
        else{
            string str=s;
            str[i]=tolower(str[i]);
            solve(s , i+1 , arr);
            solve(str , i+1 , arr);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>arr;
        solve(s , 0 , arr);
        return arr;
    }
};