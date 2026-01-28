class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,pair<string,bool>>>p;
        for(int i=0; i<code.size(); i++){
            p.push_back({businessLine[i] , {code[i] , isActive[i]}});
        }
        sort(p.begin() , p.end());
        vector<string>res;
        for(int i=0; i<p.size(); i++){
            string s=p[i].second.first;
            int f=0;
            if(s.empty()) f=1;
            if((p[i].first=="electronics" || p[i].first=="grocery" || p[i].first=="pharmacy" || p[i].first=="restaurant") && p[i].second.second==true){
                for(int i=0; i<s.size(); i++){
                    char ch=tolower(s[i]);
                    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || ch=='_') continue;
                    else{
                        f=1;
                        break;
                    }
                }
            }
            else f=1;
            if(f==0) res.push_back(p[i].second.first);
        }
        
        return res;
    }
};