class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        long long an=0;
        string ans;
        while(i<=j){
            string a=to_string(nums[i]);
            string b=to_string(nums[j]);
            if(i!=j) ans=a+b;
            else ans=a;
            an+=stoll(ans);
            i++;
            j--;
        }
        return an;
    }
};