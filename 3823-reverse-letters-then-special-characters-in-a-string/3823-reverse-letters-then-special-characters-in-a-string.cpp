class Solution {
public:
    string reverseByType(string s) {
        string a, sp;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                a+=s[i];
            }
            else sp+=s[i];
        }
        reverse(a.begin() , a.end());
        reverse(sp.begin() , sp.end());
        int j=0,k=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=a[j++];
            }
            else s[i]=sp[k++];
        }
        return s;
    }
};