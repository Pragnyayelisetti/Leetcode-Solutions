class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        //aabaaa
        while(i<j){
            if(s[i]==s[j]){
                char ch=s[i];
                i++;
                j--;
                while(i<=j && s[i]==ch) i++;
                while(i<=j && s[j]==ch) j--;
            }
            else return j-i+1;
        }
        if(i==j) return 1;
        return 0;
    }
};