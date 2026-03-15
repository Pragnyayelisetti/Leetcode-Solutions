class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>ans;
        string s="";
        for(char ch:target){//b
            char c='a';
            while(c<=ch){
                s+=c;//a
                ans.push_back(s);//a
                s.pop_back();//""
                c++;//b
            }
            s+=ch;//a
        }
        return ans;
    }
};