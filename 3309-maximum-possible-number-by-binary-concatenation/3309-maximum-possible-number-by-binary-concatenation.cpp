class Solution {
public:
    string to_binary(int n){
        string s;
        while(n){
            s+=(n%2) +'0';
            n=n/2;
        }
        reverse(s.begin() , s.end());
        return s;
    }
    int maxGoodNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<string>arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back(to_binary(nums[i]));
        }
        sort(arr.begin() , arr.end() , [](auto &a , auto &b){
            return a+b>b+a;
        });
        string s;
        for(string ch:arr) s+=ch;
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum = sum*2 + (s[i]-'0');
        }
        return sum;
    }
};