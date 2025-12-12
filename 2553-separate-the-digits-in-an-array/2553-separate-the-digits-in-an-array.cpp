class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            int a=nums[i];
            vector<int>ar;
            while(a>0){
                int rem=a%10;
                ar.push_back(rem);
                a=a/10;
            }
            reverse(ar.begin(),ar.end());
            for(int j=0; j<ar.size(); j++){
                arr.push_back(ar[j]);
            }
        }
        return arr;
    }
};