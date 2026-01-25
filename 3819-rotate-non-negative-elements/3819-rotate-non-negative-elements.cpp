class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0) arr.push_back(nums[i]);
        }
        int n=arr.size();
        if(n==0) return nums;
        k=k%n;
        vector<int>a((int)arr.size());
        for(int i=0; i<arr.size(); i++){
            a[i]=arr[(i+k)%n];
        }
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                nums[i]=a[j];
                j++;
            }
        }
        return nums;
    }
};