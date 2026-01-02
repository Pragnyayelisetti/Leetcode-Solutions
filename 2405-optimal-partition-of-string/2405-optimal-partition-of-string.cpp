class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>freq;
        int cnt=0;
        int start=0;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            if(freq[s[i]]>1) cnt++;
            while(freq[s[i]]>1){
                freq[s[start]]--;
                start++;
            }
        }
        for(auto it:freq){
            if(it.second>1){
                cnt++;
                it.second--;
            }
        }
        for(auto it:freq){
            if(it.second>0){
                cnt++;
                break;
            }
        }
        return cnt;
    }
};