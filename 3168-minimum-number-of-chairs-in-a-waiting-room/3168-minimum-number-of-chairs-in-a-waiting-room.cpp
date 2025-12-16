class Solution {
public:
    int minimumChairs(string s) {
        int maxi=INT_MIN;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='E'){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else{
                cnt--;
            }
        }
        return maxi;
    }
};