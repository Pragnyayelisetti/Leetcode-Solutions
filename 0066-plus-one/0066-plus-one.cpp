class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>arr;
        int sum=0,c=0;
        for(int i=digits.size()-1; i>=0; i--){
            if(i==digits.size()-1) sum=digits[i]+1+c;
            else sum=digits[i]+c;
            c=sum/10;//1
            if(c==0){
                arr.push_back(sum);
                sum=0;
            }
            else{
                arr.push_back(sum%10);
                sum=c;
            }
        }
        if(c!=0) arr.push_back(c);
        reverse(arr.begin() , arr.end());
        return arr;
    }
};