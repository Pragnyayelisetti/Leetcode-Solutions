class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        for(int i=1; i<n; i++){
            for(int j=2; j<=n; j++){
                string res;
                if(__gcd(i , j)==1 && i<j){
                    string a=to_string(i);
                    res+=a;
                    res+="/";
                    string b=to_string(j);
                    res+=b;
                    ans.push_back(res);
                }
            }
        }
        return ans;
    }
};