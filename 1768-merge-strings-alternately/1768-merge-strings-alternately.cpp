class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j=0,i=0;
        string ans="";
        for(i=0; i<word1.size() && j<word2.size(); i++){
            ans+=word1[i];
            ans+=word2[i];
            j++;
        }
        while(i<word1.size()){
            ans+=word1[i];
            i++;
        }
        while(j<word2.size()){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};