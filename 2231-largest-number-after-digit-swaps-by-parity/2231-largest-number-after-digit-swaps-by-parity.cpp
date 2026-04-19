class Solution {
public:
    int largestInteger(int num) {
        vector<int>odd , even;
        int n=num;
        string s=to_string(num);
        //609
        while(n){
            int rem=n%10;
            if(rem%2==0) even.push_back(rem);//6,0
            else odd.push_back(rem);//9
            n=n/10;
        }
        sort(odd.rbegin() , odd.rend());//9
        sort(even.rbegin() , even.rend());//6 , 0
        int i=0,j=0;
        string res="";
        for(char ch:s){
            int d=ch-'0';
            if(d%2==0) res+=to_string(even[i++]);
            else res+=to_string(odd[j++]);
        }
        return stoi(res);
    }
};