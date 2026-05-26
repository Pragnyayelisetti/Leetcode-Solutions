class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0; i<words.size(); i++){
            string s=words[i];
            unordered_map<char,char>freq,freq1;
            int f=0;
            for(int j=0; j<s.size(); j++){
                if(freq.find(s[j])!=freq.end()){
                    if(freq[s[j]]!=pattern[j]) f=1;
                }
                else if(freq1.find(pattern[j])!=freq1.end()){
                    if(freq1[pattern[j]]!=s[j]) f=1;
                }
                else{
                    freq[s[j]]=pattern[j];
                    freq1[pattern[j]]=s[j];
                }
            }
            if(f==0) ans.push_back(words[i]);
        }
        return ans;
    }
};