class Solution {
public:
    //int ans=0;
    unordered_set<string>a;
    void solve(vector<int>& digits, int cnt, string &s, vector<bool>&used){
        if(cnt==3){
            if((s[2]-'0')%2==0){
                cout<<s<<" ";
                a.insert(s);
            }
            return;
        }
        //if(i>=digits.size()) return;
        for(int j=0; j<digits.size(); j++){
            if(used[j]) continue;
            if(cnt==0 && digits[j]==0) continue;
            s.push_back(digits[j]+'0');
            used[j]=true;
            solve(digits,cnt+1,s,used);
            s.pop_back();
            used[j]=false;
        }
    }
    int totalNumbers(vector<int>& digits) {
        int cnt=0;
        string s="";
        int n=digits.size();
        //digits.assign(se.begin() , se.end());
        vector<bool>used(n,false);
        solve(digits,cnt,s,used);
        return (int)a.size();
    }
};