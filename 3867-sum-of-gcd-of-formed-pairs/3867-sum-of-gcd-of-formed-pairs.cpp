class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n+1 , 0);
        prefix[0]=nums[0];
        for(int i=1; i<n; i++) prefix[i]=max(nums[i] , prefix[i-1]);
        vector<int>arr;
        for(int i=0; i<n; i++){
            arr.push_back(__gcd(prefix[i] , nums[i]));
        }
        sort(arr.begin() , arr.end());
        int i=0,j=n-1;
        long long sum=0;
        while(i<j){
            sum += __gcd(arr[i], arr[j]);
            i++;
            j--;
        }
        return sum;
    }
};