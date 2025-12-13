class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char ch:s) freq[ch]++;
        vector<pair<char,int>>p;
        for(auto it:freq) p.push_back({it.first,it.second});
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });
        string str;
        for(int i=0; i<p.size(); i++){
            str.append(p[i].second,p[i].first);
        }
        return str;
    }
};