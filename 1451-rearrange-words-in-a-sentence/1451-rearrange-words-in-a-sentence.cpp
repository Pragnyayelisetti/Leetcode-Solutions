class Solution {
public:
    string arrangeWords(string text) {
        istringstream iss(text);
        vector<string>str;
        string s;
        while(iss>>s){
            str.push_back(s);
        }
        vector<pair<string,int>>p;
        for(int i=0; i<str.size(); i++){
            p.push_back({str[i] , i});
        }
        sort(p.begin() , p.end() , [](auto &a , auto &b){
            if(a.first.size()==b.first.size()) return a.second<b.second;
            else return a.first.size()<b.first.size();
        });
        string res;
        for(int i=0; i<p.size(); i++){
            for(int j=0; j<p[i].first.size(); j++){
                p[i].first[j]=tolower(p[i].first[j]);
            }
            if(i==0){
                p[i].first[0]=toupper(p[i].first[0]);
                res+=p[i].first;
            }
            else res+=p[i].first;
            if(i!=p.size()-1) res+=' ';
        }
        return res;
        //for(int i=0; i<str.size(); i++) cout<<str[i]<<" ";
        //return " ";
    }
};