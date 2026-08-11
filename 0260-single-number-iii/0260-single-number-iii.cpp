class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(int num:nums) xr=xr^num;//xor of all numbers
        long long n=(long long)xr&-(long long)xr;//gets the rightmost set bit
        int x=0,y=0;
        //dividing into groups based on the rightmost set bit
        for(int num:nums){
            if(num&n) x=x^num;
            else y=y^num;
        }
        return {x , y};
    }
};