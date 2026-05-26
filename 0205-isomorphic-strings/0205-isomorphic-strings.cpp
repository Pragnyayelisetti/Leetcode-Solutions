class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>freq,freq1;
        for(int i=0; i<s.size(); i++){
            if(freq.find(s[i])!=freq.end()){
                if(freq[s[i]]!=t[i]) return false;
            }
            else if(freq1.find(t[i])!=freq1.end()){
                if(freq[t[i]]!=s[i]) return false;
            }
            else{
                freq[s[i]]=t[i];
                freq1[t[i]]=s[i];
            }
        }
        return true;
    }
};