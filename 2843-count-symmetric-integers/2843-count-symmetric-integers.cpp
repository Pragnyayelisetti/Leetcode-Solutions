class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low; i<=high; i++){
            string s=to_string(i);
            long long sum1=0,sum2=0;
            if(s.size()%2==0){
                for(int i=0; i<s.size()/2; i++){
                    sum1 += s[i]-'0';
                }
                for(int i=s.size()/2; i<s.size(); i++){
                    sum2 += s[i]-'0';
                }
                if(sum1==sum2) cnt++;
            }
        }
        return cnt;
    }
};