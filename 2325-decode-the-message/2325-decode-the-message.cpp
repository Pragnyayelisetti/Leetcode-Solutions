class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>freq;
        char ch='a';
        for(int s:key){
            if(s!=' ' && freq.find(s)==freq.end()){
                freq[s]=ch;
                ch++;
            }
        }
        //for(auto it:freq) cout<<it.first<<" "<<it.second<<endl;
        string res="";
        for(char ch:message){
            if(ch==' ') res+=' ';
            else res+=freq[ch];
        }
        return res;
    }
};