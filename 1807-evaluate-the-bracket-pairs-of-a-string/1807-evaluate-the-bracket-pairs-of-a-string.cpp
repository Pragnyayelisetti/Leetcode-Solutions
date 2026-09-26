class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        vector<pair<string,int>>str;
        int b=0;
        for(int i=0; i<s.size(); i++){
            string a="";
            if(s[i]=='('){
                i++;
                while(i<s.size() && s[i]!=')'){
                    a+=s[i];
                    i++;
                }
            }
            if(!a.empty()){
                str.push_back({a,b});
                b++;
            }
        }
        
        sort(str.begin() , str.end());
        sort(knowledge.begin() , knowledge.end());
        // for(int i=0; i<str.size(); i++){
        //     cout<<str[i].first<<" "<<str[i].second<<" ";
        // }
        // cout<<endl;
        vector<string>x(b+1);
        int j=0;
        for(int i=0; i<str.size(); i++){
            x[str[i].second]="?";
            while(j<knowledge.size() && knowledge[j][0]<str[i].first){
                j++;
            }
            if(j<knowledge.size() && str[i].first==knowledge[j][0]){
                x[str[i].second]=knowledge[j][1];
            }
        }
        //for(string o:x) cout<<o<<" ";
        //cout<<endl;
        int y=0;
        string ans="";
        for(int i=0; i<s.size() && y<x.size(); i++){
            if(s[i]=='('){
                while(i<s.size() && s[i]!=')'){
                    i++;
                }
                ans+=x[y];
                y++;
            }
            else ans+=s[i];
        }
        return ans;
    }
};