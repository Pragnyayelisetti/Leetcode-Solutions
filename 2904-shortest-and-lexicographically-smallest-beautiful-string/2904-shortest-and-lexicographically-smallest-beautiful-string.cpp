class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int cnt=0;
        int start=0;
        string mini="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') cnt++;
            while(cnt==k){
                if(cnt==k){
                    string temp=s.substr(start , i-start+1);
                    if(mini.empty()) mini=temp;//100011
                    else if(mini.size()>temp.size()) mini=temp;
                    else if(mini.size()==temp.size()) mini=min(mini ,temp);
                }
                if(s[start]=='1') cnt--;//2
                start++;//1a
            }
        }
        return mini;
    }
};