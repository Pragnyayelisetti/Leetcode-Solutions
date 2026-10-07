class Solution {
public:
    vector<int> solve(string s){
        vector<int>ans;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*' || s[i]=='-' || s[i]=='+'){
                vector<int>a=solve(s.substr(0,i));
                vector<int>b=solve(s.substr(i+1));
                for(int x: a){
                    for(int y: b){
                        if(s[i]=='+') ans.push_back(x+y);
                        else if(s[i]=='*') ans.push_back(x*y);
                        else ans.push_back(x-y);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(s));
        return ans;
    }
    vector<int> diffWaysToCompute(string s) {
        return solve(s);
    }
};