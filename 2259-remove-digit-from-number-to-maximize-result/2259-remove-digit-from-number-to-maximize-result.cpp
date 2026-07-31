class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxi="";
        for(int i=0; i<number.size(); i++){
            if(number[i]==digit){
                string s=number.substr(0 , i)+number.substr(i+1);
                maxi=max(maxi , s);
            }
        }
        return maxi;
    }
};