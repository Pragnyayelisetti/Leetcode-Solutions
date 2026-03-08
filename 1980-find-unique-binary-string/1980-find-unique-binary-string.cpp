class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res;
        int i=0;
        for(string num:nums){
            if(num[i]=='0') res+='1';
            else res+='0';
            i++;
        }
        return res;
    }
};