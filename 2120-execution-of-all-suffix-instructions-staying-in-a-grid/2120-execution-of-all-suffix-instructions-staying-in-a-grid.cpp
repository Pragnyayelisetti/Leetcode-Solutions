class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>arr;
        for(int i=0; i<s.size(); i++){
            int f=0;
            int a=startPos[0];
            int b=startPos[1];
            for(int j=i; j<s.size(); j++){
                if(s[j]=='R'){
                    b++;
                    if(b>=n){
                        arr.push_back(j-i);
                        f=1;
                        break;
                    }
                }
                if(s[j]=='L'){
                    b--;
                    if(b<0){
                        arr.push_back(j-i);
                        f=1;
                        break;
                    }
                }
                if(s[j]=='U'){
                    a--;
                    if(a<0){
                        arr.push_back(j-i);
                        f=1;
                        break;
                    }
                }
                if(s[j]=='D'){
                    a++;
                    if(a>=n){
                        arr.push_back(j-i);
                        f=1;
                        break;
                    }
                }
            }
            if(f==0) arr.push_back(s.size()-i);
        }
        return arr;
    }
};