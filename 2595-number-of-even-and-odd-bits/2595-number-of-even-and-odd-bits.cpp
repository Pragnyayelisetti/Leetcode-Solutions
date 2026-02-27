class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s;
        while(n){
            s.push_back((n%2)+'0');
            n=n/2;
        }
        int ecnt=0,ocnt=0;
        for(int i=0; i<s.size(); i++){
            if(i%2==0 && s[i]=='1') ecnt++;
            else if(i%2!=0 && s[i]=='1') ocnt++;
        }
        vector<int>arr;
        arr.push_back(ecnt);
        arr.push_back(ocnt);
        return arr;
    }
};