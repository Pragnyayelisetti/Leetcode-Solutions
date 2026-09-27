class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            string x="";
            if(s[i]==')'){
                while(st.top()!='('){
                    x+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else st.push(s[i]);
            //cout<<x<<endl;
            for(int j=0; j<x.size(); j++){
                st.push(x[j]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};