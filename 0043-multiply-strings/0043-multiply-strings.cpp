class Solution {
public:
    string addStrings(string a , string b){
        int i=a.size()-1 , j=b.size()-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0){
            int sum = carry;
            if(i>=0) sum += a[i]-'0';
            if(j>=0) sum += b[j]-'0';
            res += sum%10 +'0';
            carry=sum/10;
            i--;
            j--;
        }
        if(carry!=0) res+=carry+'0';
        reverse(res.begin() , res.end());
        return res;
    }
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        string maxi="0";
        int k=0;
        for(int i=num2.size()-1; i>=0; i--){
            int pr=1,rem=0,a=num2[i]-'0';//a=4
            string num="";
            for(int j=num1.size()-1; j>=0; j--){
                int b=num1[j]-'0';//1
                int p=a*b+rem;//4
                num += (p%10) +'0';
                rem=p/10;
            }
            if(rem>0) num += rem +'0';
            reverse(num.begin() , num.end());
            for(int j=0; j<k; j++) num+='0';
            k++;
            maxi=addStrings(maxi , num);//738 + 6150 + 49200//100
        }
        // string res=to_string(ans);
        // return res;
        return maxi;
    }
};