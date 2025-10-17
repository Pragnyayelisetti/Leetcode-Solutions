class Solution {
public:
    int magicalString(int n) {
        string s="";
        s+='1';
        s+='2';
        s+='2';
        int i=2;//s=1 2 2 
        while(s.size()<n){
            if(i%2==0 && s[i]=='1'){
                s+='1';//1 2 2 1 
            }
            else if(i%2==0 && s[i]=='2'){
                s+='1';
                s+='1';
            }
            else if(i%2!=0 && s[i]=='1'){
                s+='2';
            }
            else if(i%2!=0 && s[i]=='2'){
                s+='2';//1 2 2 
                s+='2';
            }
            i++;
        }
        for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
        int onecnt=0;
        for(int j=0; j<n; j++){
            if(s[j]=='1'){
                onecnt++;
            }
        }
        return onecnt;
    }
};