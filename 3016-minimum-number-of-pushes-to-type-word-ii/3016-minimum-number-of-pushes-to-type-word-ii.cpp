class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char , int>freq;
        for(char ch:word) freq[ch]++;
        int cnt=0;
        int ans=0;
        vector<pair<char , int>>p(freq.begin() , freq.end());
        int pushes=0;
        sort(p.begin(), p.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });
        for(auto it:p){
            if(cnt<=7) ans+=it.second;
            else if(cnt<=15) ans+=2*it.second;
            else if(cnt<=23) ans+=3*it.second;
            else ans+=4*it.second;
            cnt++;
        }
        return ans;
    }
};