class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>res;
        sort(products.begin() , products.end());
        string x="";
        for(char ch:searchWord){
            x+=ch;
            vector<string>temp;
            for(string s:products){
                if(s.find(x)==0){
                    temp.push_back(s);
                }
            }
            if(temp.size()>3){
                temp.resize(3);
            }
            res.push_back(temp);
        }
        return res;
    }
};