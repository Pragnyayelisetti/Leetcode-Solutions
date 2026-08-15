class Solution {
public:
    int ans=0;
    int longestSubstring(string s, int k) {
        unordered_map<char,int>freq;
        for(char ch : s) freq[ch]++;
        for(int end=0; end<s.size(); end++){
            if(freq[s[end]]<k){
                return max(longestSubstring(s.substr(end+1), k),longestSubstring(s.substr(0, end), k));
            }
        }
        return s.size();
        //return 0;
    }
};