class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char , int>freq, freq1;
        for(char ch:s) freq[ch]++;//b-->2 , a-->1
        for(char ch:t) freq1[ch]++;//a-->2 , b-->1
        int cnt=0;
        for(char ch:s){
            if(freq[ch]>0 && freq1.find(ch)==freq1.end()){
                cnt+=freq[ch];
                freq.erase(ch);
            }
            else if(freq[ch]>freq1[ch]){
                cnt+=freq[ch]-freq1[ch];
                freq.erase(ch);
                freq1.erase(ch);
            }
        }
        return cnt;
    }
};