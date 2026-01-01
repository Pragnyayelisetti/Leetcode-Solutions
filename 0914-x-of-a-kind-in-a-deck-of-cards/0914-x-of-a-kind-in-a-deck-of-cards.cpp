class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        //if(deck.size()==1) return false;
        unordered_map<int,int>freq;
        for(int d:deck) freq[d]++;
        vector<pair<int , int>>p;
        for(auto it:freq){
            p.push_back({it.first , it.second});
        }
        int g=p[0].second;
        for(int i=1; i<p.size(); i++){
            g=gcd(g , p[i].second);
        }
        if(g==1) return false;
        return true;
    }
};