class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int left=2*(numRows-1);
        int right = 0;
        string res = "";
        for(int i=0; i<numRows; i++){
            int j=i;
            if(left==0 || right==0){
                while(j<s.size()){
                    res+=s[j];
                    j+=max(left , right);
                }
            }
            else{
                while(j<s.size()){
                    res += s[j];
                    j+=left;
                    if(j<s.size()){
                        res+=s[j];
                        j+=right;
                    }
                    else break;
                }
            }
            left -= 2;
            right += 2;
        }
        return res;
    }
};