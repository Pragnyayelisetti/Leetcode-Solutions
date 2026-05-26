class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>freq;
        int cnt=0;
        for(int i=0; i<word.size(); i++){
            if(word[i]>='A' && word[i]<='Z'){
                if(freq[word[i]]==-1) continue;
                if(freq.find(word[i]+32)!=freq.end()){
                    cnt++;
                    freq[word[i]]=1;
                    freq.erase(word[i]+32);
                }
            }
            else{
                if(freq.find(word[i]-32)!=freq.end()){
                    if(freq[word[i]-32]==1) cnt--;
                    freq[word[i]-32]=-1;
                }
                else{
                    freq[word[i]]=1;
                }
            }
        }
        return cnt;
    }
};