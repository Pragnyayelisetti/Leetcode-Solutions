class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2) return "";
        set<int>st(s.begin() , s.end());
        for(int i=0; i<s.size(); i++){
            if(st.find(tolower(s[i]))==st.end() || st.find(toupper(s[i]))==st.end()){
                string s1=longestNiceSubstring(s.substr(0 , i));
                string s2=longestNiceSubstring(s.substr(i+1 , s.size()-i-1));
                if(s1.size()>=s2.size()) return s1;
                return s2;
            }
        }
        return s;
    }
};