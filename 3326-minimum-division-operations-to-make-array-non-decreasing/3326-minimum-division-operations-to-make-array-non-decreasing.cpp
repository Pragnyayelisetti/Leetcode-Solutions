class Solution {
    vector<int>arr=vector<int>(1000001); 
public:
    void SPF(int maxi){
        for(int i=0; i<=maxi; i++) arr[i]=i;
        for(int i=2; i*i<=maxi; i++){
            if(arr[i]==i){
                for(int j=i*i; j<=maxi; j+=i){
                    if(arr[j]==j) arr[j]=i;
                }
            }
        }
    }
    int minOperations(vector<int>& nums) {
        int maxi=*max_element(nums.begin() , nums.end());
        SPF(maxi);
        int cnt=0;
        for(int i=nums.size()-1; i>0; i--){
            while(nums[i]<nums[i-1]){
                if(arr[nums[i-1]]==nums[i-1]) break;
                else{
                    //int a=nums[i-1]/arr[nums[i-1]];
                    nums[i-1]=arr[nums[i-1]];
                    cnt++;
                }
            }
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]) return -1;
        }
        return cnt;
    }
};