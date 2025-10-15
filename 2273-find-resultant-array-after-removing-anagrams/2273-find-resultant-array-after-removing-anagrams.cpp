class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(words[i]=="-1") continue;
            map<char , int>freq;
            for(int j=0; j<words[i].size(); j++){
                freq[words[i][j]]++;
            }
            for(int j=i+1; j<words.size(); j++){
                if(words[j]=="-1") continue;
                map<char , int>f;
                for(int k=0; k<words[j].size(); k++){
                    f[words[j][k]]++;
                }
                int fl=1;
                if(freq.size()!=f.size()){
                    fl=0;
                }
                else{
                    auto it1 = freq.begin();
                    auto it2 = f.begin();
                    while(it1!=freq.end() && it2!=f.end()){
                        if(it1->first!=it2->first || it1->second!=it2->second) {
                            fl=0;
                            break;
                        }
                        it1++;
                        it2++;
                    }
                }
                if(fl==1){
                    words[j]="-1";
                }
                else{
                    break;
                }
            }
        }
        vector<string>res;
        for(int i=0; i<words.size(); i++){
            if(words[i]!="-1"){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};