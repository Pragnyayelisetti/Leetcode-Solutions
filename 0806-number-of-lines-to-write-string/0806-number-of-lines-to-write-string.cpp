class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0,cnt=0;
        for(int i=0; i<s.size(); i++){
            if(sum+widths[s[i]-97]>100){
                sum=0;
                cnt++;
            }
            sum+=widths[s[i]-97];//84
        }
        return {cnt+1 , sum};
    }
};