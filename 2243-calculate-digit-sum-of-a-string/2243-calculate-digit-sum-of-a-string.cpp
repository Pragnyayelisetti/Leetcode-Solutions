class Solution {
public:
    string digitSum(string s, int k) {
        //11111222223 , k=2
       while(s.size()>k){
            string str="";
            int cnt=0;
            int sum=0;
            for(int i=0; i<s.size(); i++){
                sum += s[i]-'0';
                cnt++;
                if(cnt%k==0){
                    string ch=to_string(sum);
                    str+=ch;
                    sum=0;
                    cnt=0;
                }
            }
            if(cnt>0){
                string ch=to_string(sum);
                str+=ch;
            }
            s=str;
       }
       return s;
    }
};