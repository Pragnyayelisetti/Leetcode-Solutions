class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0; i<s.size()-1; i++){
            char a=s[i];
            char b=s[i+1];
            if(abs(a-b)>2) return false;
        }
        return true;
    }
};