class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>freq;
        for(int i:tops) freq[i]++;
        for(int i:bottoms) freq[i]++;
        int f=0;
        int ans=0;
        for(auto it:freq){
            if(it.second>=tops.size()){
                f=1;
                ans=it.first;
                break;
            }
        }
        if(f==0) return -1;
        int c=0,cnt=0;
        for(int i=0; i<tops.size(); i++){
            if(tops[i]==ans){
                c++;
                continue;
            }
            else if(bottoms[i]==ans){
                cnt++;
                continue;
            }
            else return -1;
        }
        return min(c , cnt);
    }
};