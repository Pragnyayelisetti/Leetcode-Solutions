class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;
        for(int i=0; i<words.size(); i++){
            int sum=0;
            for(int j=0; j<words[i].size(); j++){
                char ch=words[i][j];
                sum+=weights[ch-'a'];
            }
            sum=sum%26;
            char ch='a'+26-sum-1;
            s+=ch;
        }
        return s;
    }
};