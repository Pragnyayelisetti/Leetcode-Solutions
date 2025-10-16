class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string res="";
        int sum=0;
        for(int i=shifts.size()-1; i>=0; i--){
            sum += shifts[i];
            sum=sum%26;
            int c=((s[i]-'a'+sum)%26)+'a';
            res.push_back(char(c));
        }
        reverse(res.begin() , res.end());
        return res;
    }
};