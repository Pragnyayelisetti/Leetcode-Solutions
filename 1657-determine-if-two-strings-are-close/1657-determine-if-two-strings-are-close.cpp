class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>a , b;
        unordered_map<char , int>freq , freq1;
        for(char ch:word1){
            freq[ch]++;
        }
        for(char ch:word2){
            if(freq[ch]>0) freq1[ch]++;
        }
        for(auto it:freq) a.push_back(it.second);
        for(auto it:freq1) b.push_back(it.second);
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        return a==b;
    }
};