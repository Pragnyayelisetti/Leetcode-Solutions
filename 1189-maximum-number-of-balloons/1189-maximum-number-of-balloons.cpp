class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>freq;
        for(char ch:text){
            if(ch=='b' || ch=='a' || ch=='l' || ch=='n' || ch=='o') freq[ch]++;
        }
        int mini=INT_MAX;
        if(freq.size()!=5) return 0;
        for(auto it:freq){
            if(it.first=='o' || it.first=='l') mini=min(mini , it.second/2);
            else mini=min(mini , it.second);
        }
        return mini;
    }
};