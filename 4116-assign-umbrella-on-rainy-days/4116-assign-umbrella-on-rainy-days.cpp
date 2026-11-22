class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int acnt=0,bcnt=0;
        vector<string>arr;
        for(int i=0; i<rain.size()-1; i++){
            int a=0,b=0;
            if(rain[i]==1 and rain[i+1]==1){
                a=1;
            }
            if(rain[i]==1) b=1;
            if(a==1 and b==0){
                arr.push_back("Alice");
                acnt++;
            }
            if(a==0 and b==1){
                arr.push_back("Bob");
                bcnt++;
            }
            if(a==1 and b==1){
                if(acnt<=bcnt){
                    arr.push_back("Alice");
                    acnt++;
                }
                else if(acnt>bcnt){
                    arr.push_back("Bob");
                    bcnt++;
                }
            }
            if(a==0 and b==0){
                arr.push_back("None");
            }
        }
        if(rain[rain.size()-1]==1) arr.push_back("Bob");
        else arr.push_back("None");
        return arr;
    }
};