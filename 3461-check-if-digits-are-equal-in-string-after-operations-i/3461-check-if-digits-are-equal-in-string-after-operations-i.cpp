class Solution {
public:
    bool hasSameDigits(string s) {
        string res;
        res=s;
        while(res.size()>2){
            string a;
            for(int i=0; i<res.size()-1; i++){
                int sum=res[i]-'0' + res[i+1]-'0';
                a.push_back((sum % 10)+'0');
            }
            res=a;
        } 
        if(res[0]==res[1]) return true;
        return false;   
    }
};