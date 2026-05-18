class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        //0 , 3 , 5 , 6 , 11
        vector<int>arr;
        vector<int>res;
        int f=0;
        arr.push_back(0);
        for(int i=0; i<s.size(); i++){
            if(s[i]==c && i!=0) arr.push_back(i);
            else if(s[i]==c && i==0) f=1;//0 , 3
        }
        if(arr.size()==1){
            for(int i=0; i<s.size(); i++){
                res.push_back(abs(i-arr[0]));
            }
            return res;
        }
        for(int i=0; i<arr.size()-1; i++){
            int a=arr[i];//0
            int b=arr[i+1];//3
            if(a==0 && f==1){
                for(int j=0; j<=b; j++){
                    res.push_back(min(abs(j-a) , abs(j-b)));
                }
            }
            else if(a==0){
                for(int j=0; j<=b; j++){
                    res.push_back(abs(j-b));
                }
            }
            else{
                for(int j=a+1; j<=b; j++){
                    res.push_back(min(abs(j-a) , abs(j-b)));
                }
            }
        }
        int n=arr[arr.size()-1];
        for(int i=n+1; i<s.size(); i++){
            res.push_back(abs(i-n));
        }
        return res;
    }
};