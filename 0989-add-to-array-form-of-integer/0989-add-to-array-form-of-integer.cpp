class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c=0;
        vector<int>arr;
        for(int i=num.size()-1; i>=0; i--){
            int sum=num[i]+k%10+c;//3
            arr.push_back(sum%10);//5 5 3
            c=sum/10;//1
            k=k/10;//1
        }
        while(k){
            int sum=k%10+c;
            c=sum/10;
            arr.push_back(sum%10);
            k=k/10;
        }
        if(c!=0) arr.push_back(c);
        reverse(arr.begin() , arr.end());
        return arr;
    }
};