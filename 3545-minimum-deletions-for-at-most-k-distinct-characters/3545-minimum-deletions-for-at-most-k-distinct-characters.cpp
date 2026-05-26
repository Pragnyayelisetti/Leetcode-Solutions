class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char , int>freq;
        for(char ch:s) freq[ch]++;
        vector<pair<char , int>>p;
        for(auto it:freq) p.push_back({it.first , it.second});
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            return a.second<b.second;
        });
        int ans=0;
        if(p.size()<=k) return 0;
        for(int i=0; i<p.size()-k; i++){
            ans+=p[i].second;
        }
        return ans;
    }
};