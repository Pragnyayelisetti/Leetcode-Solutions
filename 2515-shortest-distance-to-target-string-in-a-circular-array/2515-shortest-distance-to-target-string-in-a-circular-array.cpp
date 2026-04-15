class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        vector<int>idx;
        for(int i=0; i<words.size(); i++){
            if(words[i]==target){
                idx.push_back(i);
            }
        }
        if(idx.empty()) return -1;
        int mini=INT_MAX;
        for(int i=0; i<idx.size(); i++){
            mini=min(mini,min(abs(idx[i]-startIndex) , n-abs(idx[i]-startIndex)));
        }
        return mini;
    }
};