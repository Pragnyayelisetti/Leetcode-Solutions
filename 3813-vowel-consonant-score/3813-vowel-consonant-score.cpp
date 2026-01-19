class Solution {
public:
    bool isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(char ch:s){
            if(isVowel(ch)) v++;
            else if(ch>='a' && ch<='z' && !isVowel(ch)) c++;
        }
        if(c>0) return floor(v/c);
        return 0;
    }
};