class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        int scnt=0,ans=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
                scnt++;
            }
            else{
                st.pop();
                if(s[i-1]=='('){
                    int val=1;
                    for(int j=1; j<scnt; j++){
                        val=val*2;
                    }
                    ans+=val;
                }
                scnt--;
            }
        }
        return ans;
    }
};