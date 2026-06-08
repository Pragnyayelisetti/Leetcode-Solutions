class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans=nums;
        sort(ans.begin() , ans.end());
        int idx=-1,f=0,id=-1;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]==pivot && f==0){
                idx=i;
                f=1;
            }
            if(ans[i]==pivot) id=i;
        }
        int i=0,j=id+1;
        for(int k=0; k<nums.size(); k++){
            if(nums[k]<pivot){
                ans[i]=nums[k];
                i++;
            }
            else if(nums[k]>pivot){
                ans[j]=nums[k];
                j++;
            }
            else ans[idx++]=nums[k];
        }
        return ans;
    }
};