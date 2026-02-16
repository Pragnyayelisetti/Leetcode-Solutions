class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int start=0;
        int onecnt=0;
        string res="";
        int mini=INT_MAX;
        for(int end=0; end<s.size(); end++){
            if(s[end]=='1') onecnt++;
            while(onecnt==k){
                int len = end-start+1;
                if(len<mini){
                    mini=len;
                    res=s.substr(start , len);
                }
                else if(len==mini && s.substr(start , len)<res){
                    res=s.substr(start , len);
                }
                if(s[start++]=='1') onecnt--;
            }
        }
        return res;
    }
};