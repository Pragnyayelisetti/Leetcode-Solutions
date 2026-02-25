class Solution {
public:
    int oneBits(int n){
        int cnt=0;
        while(n){
            if(n%2==1) cnt++;
            n=n/2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>p;
        for(int i=0; i<arr.size(); i++){
            p.push_back({arr[i] , oneBits(arr[i])});
        }
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        });
        vector<int>res;
        for(int i=0; i<p.size(); i++){
            res.push_back(p[i].first);
        }
        return res;
    }
};