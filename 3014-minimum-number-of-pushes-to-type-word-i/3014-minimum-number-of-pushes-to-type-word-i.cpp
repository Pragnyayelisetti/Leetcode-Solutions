class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>freq;
        for(char ch:word){
            freq[ch]++;
        }
        vector<pair<char,int>>p;
        for(auto it:freq) p.push_back({it.first , it.second});
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            return a.second>b.second;
        });
        //for(int i=0; i<p.size(); i++) cout<<p[i].first<<" "<<p[i].second<<endl;
        int add=1;
        int ans=0,cnt=0;
        for(int i=0; i<p.size(); i++){
            ans+=add*p[i].second;//8
            cnt++;//8
            if(cnt==8){
                add++;
                cnt=0;
            }
        }
        return ans;
    }
};