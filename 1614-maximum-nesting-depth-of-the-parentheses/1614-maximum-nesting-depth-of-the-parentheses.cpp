class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        stack<int>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push('(');
                maxi=max(maxi,(int)st.size());
            }
            else if(s[i]==')') st.pop();
        }
        return maxi;
    }
};