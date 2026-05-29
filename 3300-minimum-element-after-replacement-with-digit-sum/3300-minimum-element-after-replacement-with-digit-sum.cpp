class Solution {
public:
    int sum(int a){
        int s=0;
        while(a){
            s+=a%10;
            a=a/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int num:nums){
            mini=min(mini , sum(num));
        }
        return mini;
    }
};