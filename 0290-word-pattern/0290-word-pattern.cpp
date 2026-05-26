class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string>str;
        while(iss>>s){
            str.push_back(s);
        }
        if(str.size()>pattern.size() || pattern.size()>str.size()) return false;
        unordered_map<char,string>freq;
        unordered_map<string,char>freq1;
        for(int i=0; i<pattern.size(); i++){
            if(freq.find(pattern[i])!=freq.end()){
                if(freq[pattern[i]]!=str[i]) return false;
            }
            else if(freq1.find(str[i])!=freq1.end()){
                if(freq1[str[i]]!=pattern[i]) return false;
            }
            else{
                freq[pattern[i]]=str[i];
                freq1[str[i]]=pattern[i];
            }
        }
        return true;
    }
};