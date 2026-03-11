class Solution {
public:
    string toCompli(int n){
        string s;
        while(n){
            int rem=n%2;
            if(rem==1) s+='0';
            else s+='1';
            n=n/2;
        }
        return s;
    }
    int toNum(string s){
        int j=0;
        long long sum=0;
        for(int i=0; i<s.size(); i++){
            sum += pow(2 , j)*(s[i]-'0');
            j++;
        }
        return sum;
    }
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s=toCompli(n);
        //reverse(s.begin() , s.end());
        int ans=toNum(s);
        return ans;
    }
};