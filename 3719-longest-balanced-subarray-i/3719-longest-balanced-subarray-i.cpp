class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int start=0;
        for(int i=0; i<nums.size(); i++){
        unordered_set<int>onumb , enumb;
            for(int end=i; end<nums.size(); end++){
            if(nums[end]%2==0){
                if(enumb.find(nums[end])==enumb.end()) enumb.insert(nums[end]);
            }
            else{
                if(onumb.find(nums[end])==onumb.end()) onumb.insert(nums[end]);
            }
            if(enumb.size()==onumb.size()){
                start=max(start , end-i+1);
            }
        }
        }
        return start;
    }
};