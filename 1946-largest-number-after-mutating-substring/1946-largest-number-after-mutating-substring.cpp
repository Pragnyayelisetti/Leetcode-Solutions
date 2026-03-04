class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string maxi=num;
        for(int i=0; i<num.size(); i++){
            if((num[i]-'0')<=change[num[i]-'0']){
                maxi[i]=change[maxi[i]-'0']+'0';
            }
            else{
                string s=max(maxi , num);
                if(s==num) maxi=num;
                else break;
            }
        }
        return maxi;
    }
};