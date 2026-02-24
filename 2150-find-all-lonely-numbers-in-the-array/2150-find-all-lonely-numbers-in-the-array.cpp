class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums) freq[num]++;
        vector<pair<int,int>>p;
        for(auto it:freq){
            p.push_back({it.first , it.second});
        }
        sort(p.begin() , p.end());
        if(nums.size()==1) return nums;
        vector<int>res;
        for(int i=0; i<p.size(); i++){
            if(i==0 && p[i].second==1){
                int x=p[i].first;
                if(x-1!=p[i+1].first && x+1!=p[i+1].first){
                    res.push_back(p[i].first);
                }
            }
            else if(i==p.size()-1 && p[i].second==1){
                int x=p[i].first;
                if(x+1!=p[i-1].first && x-1!=p[i-1].first){
                    res.push_back(p[i].first);
                }
            }
            else if(i!=0 && i!=p.size()-1 && p[i].second==1){
                int x=p[i].first;
                if(x+1!=p[i+1].first && x-1!=p[i+1].first && x-1!=p[i-1].first && x+1!=p[i-1].first){
                    res.push_back(p[i].first);
                }
            }
        }
        return res;
    }
};