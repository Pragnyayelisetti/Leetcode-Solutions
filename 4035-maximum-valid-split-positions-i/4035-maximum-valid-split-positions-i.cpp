class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int maxi=INT_MIN;
        int f=0;
        for(int i=0; i<nums.size(); i++){
            vector<int>arr=nums;
            int cnt=0;
            if(f) arr.erase(arr.begin()+i);
            int n=arr.size();
            vector<int>prefix(n);
            vector<int>suffix(n);
            prefix[0]=arr[0];
            suffix[n-1]=arr[n-1];
            for(int j=1; j<n; j++){
                prefix[j]=__gcd(prefix[j-1],arr[j]);
            }
            for(int j=n-2; j>=0; j--){
                suffix[j]=__gcd(suffix[j+1],arr[j]);
            }
            for(int j=0; j<n-1; j++){
                if(prefix[j]==suffix[j+1]) cnt++;
            }
            maxi=max(maxi,cnt);
            if(f==0){
                i--;
                f=1;
            }
        }
        return maxi;
    }
};