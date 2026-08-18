class Solution {
    vector<bool>arr=vector<bool>(1000001 , true);
public:
    void solve(){
        arr[0]=false;
        arr[1]=false;
        for(int i=2; i*i<=1000000; i++){
            if(arr[i]){
                for(int j=i*i; j<=1000000; j+=i){
                    arr[j]=false;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        solve();
        vector<int>a;
        for(int i=left; i<=right; i++){
            if(arr[i]) a.push_back(i);
        }
        int mini=INT_MAX;
        if(a.size()<2) return {-1,-1};
        int ans=0,ans1=0;
        for(int i=0; i<a.size()-1; i++){
            int diff=a[i+1]-a[i];
            if(mini>diff){
                mini=diff;
                ans=a[i];
                ans1=a[i+1];
            }
        }
        return {ans , ans1};
    }
};