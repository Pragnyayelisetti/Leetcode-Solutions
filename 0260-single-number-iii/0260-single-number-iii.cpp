class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(int num:nums) xr=xr^num;
        long long n=(long long)xr&-(long long)xr;
        int x=0,y=0;
        for(int num:nums){
            if(num&n) x=x^num;
            else y=y^num;
        }
        return {x , y};
    }
};