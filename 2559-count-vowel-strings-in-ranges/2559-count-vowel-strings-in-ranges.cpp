class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>prefix(n);
        if(isVowel(words[0][0]) && isVowel(words[0][words[0].size()-1])) prefix[0]=1;
        for(int i=1; i<n; i++){
            if(isVowel(words[i][0]) && isVowel(words[i][words[i].size()-1])){
                prefix[i]=prefix[i-1]+1;
            }
            else prefix[i]=prefix[i-1];
        }
        for(int i=0; i<n; i++) cout<<prefix[i]<<" ";
        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l-1<0) ans.push_back(prefix[r]);
            else ans.push_back(abs(prefix[l-1]-prefix[r]));
        }
        return ans;
    }
};