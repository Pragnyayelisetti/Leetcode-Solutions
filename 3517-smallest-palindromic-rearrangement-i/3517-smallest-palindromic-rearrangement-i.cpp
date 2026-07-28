class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        //string str="";
        int i=0,j=s.size()-1;
        for(auto it:freq){
            int n=it.second;
            if(n%2==0){
                for(int k=0; k<n/2; k++){
                    s[i]=it.first;
                    i++;
                }
                for(int k=n/2; k<n; k++){
                    s[j]=it.first;
                    j--;
                }
            }
            else{
                for(int k=0; k<n/2; k++){
                    s[i]=it.first;
                    i++;
                }
                for(int k=n/2+1; k<n; k++){
                    s[j]=it.first;
                    j--;
                }
            }
        }
        for(auto it:freq){
            int n=it.second;
            if(n%2!=0){
                s[i]=it.first;
                break;
            }
        }
        return s;
    }
};