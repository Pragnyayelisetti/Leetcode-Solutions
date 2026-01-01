class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=0,s;
        vector<int>arr;
        for(int i=digits.size()-1; i>=0; i--){
            if(i==digits.size()-1) s=digits[i]+1+c;
            else s=digits[i]+c;
            arr.push_back(s%10);
            c=s/10;
        }
        if(c!=0) arr.push_back(c);
        reverse(arr.begin() , arr.end());
        return arr;
    }
};