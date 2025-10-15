class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a;
        a.assign(nums.begin(),nums.end());
        vector<int>arr;
        sort(a.begin(),a.end());
        int left=0;
        int right=a.size()-1;
        int l,r;
        while(left<right){
            int sum = a[left]+a[right];
            if(sum==target){
                l=a[left];
                r=a[right];
                break;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        int res;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==l){
                res=i;
                arr.push_back(i);
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==r && i!=res){
                arr.push_back(i);
                break;
            }
        }
        return arr;
    }
};