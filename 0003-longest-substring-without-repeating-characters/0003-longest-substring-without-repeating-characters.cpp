class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>freq;
        int start=0;
        int maxi=0;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[start]]--;
                start++;
            }
            maxi=max(maxi , i-start+1);
        }
        return maxi;
    }
};