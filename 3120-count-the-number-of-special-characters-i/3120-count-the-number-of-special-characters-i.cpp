class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>s(word.begin() , word.end());
        word.assign(s.begin() , s.end());
        unordered_map<char,int>freq;
        for(char ch:word) freq[ch]++;
        int cnt=0;
        for(char ch:word){
            if(freq.find(ch+32)!=freq.end()) cnt++;
        }
        return cnt;
    }
};