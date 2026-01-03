class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        vector<pair<int,int>>p;
        for(int i=0; i<boxTypes.size(); i++){
            p.push_back({boxTypes[i][0] , boxTypes[i][1]});
        }
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });
        for(int i=0; i<p.size(); i++) cout<<p[i].first<<" "<<p[i].second;
        for(int i=0; i<p.size(); i++){
            if(truckSize==0) break;
            if(truckSize>=p[i].first){
                ans += p[i].first*p[i].second;//50+10
                truckSize-=p[i].first;//3
            }
            else{
                ans += truckSize*p[i].second;//
                truckSize=0;
            }
        }
        return ans;
    }
};