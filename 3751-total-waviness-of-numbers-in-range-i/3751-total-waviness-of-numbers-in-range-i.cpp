class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num1<100 and num2<100) return 0;
        else if(num1<100) num1=100;
        else if(num2<100) num2=100;
        int cnt=0;
        for(int i=num1; i<=num2; i++){
            string s= to_string(i);
            for(int i=1; i<s.size()-1; i++){
                if(s[i-1]<s[i] && s[i+1]<s[i]) cnt++;
                else if(s[i-1]>s[i] && s[i+1]>s[i]) cnt++;
            }
        }
        return cnt;
    }
};