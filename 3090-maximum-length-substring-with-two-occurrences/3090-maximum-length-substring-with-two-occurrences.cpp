class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq;
        int start=0;
        int maxi=INT_MIN;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            if(freq[s[i]]<=2) maxi=max(maxi , i-start+1);
            while(freq[s[i]]>2){
                freq[s[start]]--;
                if(freq[s[start]]==0) freq.erase(s[start]);
                start++;
            }
        }
        return maxi;
    }
};