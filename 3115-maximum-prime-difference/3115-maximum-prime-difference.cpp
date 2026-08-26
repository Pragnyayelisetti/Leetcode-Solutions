class Solution {
    vector<int>arr=vector<int>(300001 , true);
public:
    void isPrime(){
        arr[0]=false;
        arr[1]=false;
        for(int i=2; i*i<=300000; i++){
            if(arr[i]){
                for(int j=i*i; j<=300000; j+=i){
                    arr[j]=false;
                }
            }
        }
    }
    int maximumPrimeDifference(vector<int>& nums) {
        isPrime();
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<=j){
            if(arr[nums[i]] && arr[nums[j]]){
                ans=j-i;
                break;
            }
            else if(arr[nums[i]] and !arr[nums[j]]) j--;
            else if(!arr[nums[i]] and arr[nums[j]]) i++;
            else{
                i++;
                j--;
            }
        }
        return ans;
    }
};