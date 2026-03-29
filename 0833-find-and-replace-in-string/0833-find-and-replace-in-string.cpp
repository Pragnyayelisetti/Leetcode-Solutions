class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        string o=s;
        vector<pair<int,int>>p;
        for(int i=0; i<indices.size(); i++){
            p.push_back({indices[i], i});
        }
        sort(p.begin(), p.end());
        for(int i=indices.size()-1; i>=0; i--){
            int idx=p[i].first;
            int id=p[i].second;
            string str=sources[id];
            if(o.substr(idx , str.size())==str){
                s.replace(idx , str.size() , targets[id]);
            }
        }
        return s;
    }
};