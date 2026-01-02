class Solution {
public:
    string smallestNumber(string pattern) {
        //int start=1,end=9;
        int n=pattern.size();
        string res;
        for(int i=1; i<=n+1; i++) res.push_back(i+'0');
        int f=0,idx;
        //return res;
        //123546789
        for(int i=0; i<n; i++){
            if(pattern[i]=='D' && f==0){
                idx=i;//5
                f=1;//1
            }
            else if(pattern[i]=='I' && f==1){
                f=0;//0
                reverse(res.begin()+idx , res.begin()+i+1);
            }
        }
        if(f==1) reverse(res.begin()+idx , res.end());
        return res;
    }
};