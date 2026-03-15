class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char , int>freq;
        for(int i=0; i<s.size(); i++) freq[s[i]]++;
        int maxi=INT_MIN;
        for(auto it:freq){
            maxi=max(maxi , it.second);
        }
        string ans;
        for(int i=s.size()-1; i>=0; i--){
            if(freq[s[i]]==maxi){
                ans+=s[i];
                freq[s[i]]--;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};