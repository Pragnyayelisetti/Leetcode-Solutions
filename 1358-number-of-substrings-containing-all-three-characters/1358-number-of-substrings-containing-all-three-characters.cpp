class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>freq;
        int cnt=0,start=0;
        for(int end=0; end<s.size(); end++){
            freq[s[end]]++;//a , b , c
            while(freq['a']>=1 && freq['b']>=1 && freq['c']>=1){
                cnt+=(int)s.size()-end;//4
                freq[s[start]]--;//b c
                start++;//1
            }
        }
        return cnt;
    }
};