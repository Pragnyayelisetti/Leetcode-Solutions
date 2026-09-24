class Solution {
public:
    int minOperations(vector<int>& nums) {
        int agcd=nums[0];
        int cnt=0;
        if(nums[0]==1) cnt++;
        for(int i=1; i<nums.size(); i++){
            agcd=__gcd(agcd,nums[i]);
            if(nums[i]==1) cnt++;
        }
        if(agcd!=1) return -1;
        if(cnt) return (int)nums.size()-cnt;
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int g=0;
            for(int j=i; j<nums.size(); j++){
                g=__gcd(g,nums[j]);
                if(g==1){
                    mini=min(mini,j-i+1);
                    break;
                }
            }
        }
        return mini+(int)nums.size()-2;
    }
};