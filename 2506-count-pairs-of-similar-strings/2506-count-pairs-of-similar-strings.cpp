class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<string>s;
        for(int i=0; i<words.size(); i++){
            map<char,int>freq;
            string p;
            for(int j=0; j<words[i].size(); j++){
                freq[words[i][j]]++;
            }
            for(auto it:freq) p.push_back(it.first);
            s.push_back(p);
        }
        int cnt=0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(s[i]==s[j]) cnt++;
            }
        }
        return cnt;
    }
};