class Solution {
public:
    int binaryGap(int n) {
        vector<int>arr;
        while(n){
            int rem=n%2;
            arr.push_back(rem);
            n=n/2;
        }
        reverse(arr.begin() , arr.end());
        // for(int a:arr) cout<<a<<" ";
        // return 0;
        vector<pair<int,int>>p;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1) p.push_back({i , arr[i]});
        }
        sort(p.begin() , p.end());
        int maxi=0;
        for(int i=0; i<p.size()-1; i++){
            maxi=max(maxi , p[i+1].first-p[i].first);
        }
        return maxi;
    }
};