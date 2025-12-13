class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int n:nums) freq[n]++;
        vector<pair<int,int>>p;
        for(auto it:freq) p.push_back({it.first , it.second});
        sort(p.begin(), p.end() ,[](auto &a , auto &b){
            if(a.second==b.second) return a.first>b.first;
            return a.second<b.second;
        });
        //string --> append
        //array --> insert
        vector<int>arr;
        for(int i=0; i<p.size(); i++) arr.insert(arr.end() , p[i].second , p[i].first);
        return arr;
    }
};