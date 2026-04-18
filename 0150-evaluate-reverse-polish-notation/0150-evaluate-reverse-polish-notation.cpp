class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                string a=st.top();
                st.pop();
                string b=st.top();
                st.pop();
                int x=stoi(a);
                int y=stoi(b);
                if(tokens[i]=="+") st.push(to_string(y+x));
                else if(tokens[i]=="-") st.push(to_string(y-x));
                else if(tokens[i]=="*") st.push(to_string(y*x));
                else if(tokens[i]=="/") st.push(to_string(y/x));
            }
            else{
                st.push(tokens[i]);
            }
        }
        int res=stoi(st.top());
        return res;
    }
};