class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2 || n==5) return true;
        if(n%2==0) return false;
        if(n%5==0) return false;
        int cnt=0;
        for(int i=3; i*i<=n; i+=2) if(n%i==0) return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                if(i==j) arr.push_back(nums[i][j]);
                else if(i==nums.size()-j-1) arr.push_back(nums[i][j]);
            }
        }
        int maxi=0;
        for(int i=0; i<arr.size(); i++){
            if(isPrime(arr[i])) maxi=max(maxi , arr[i]);
        }
        return maxi;
    }
};