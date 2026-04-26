class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>arr;
        while(n){
            int rem=n%10;
            arr.push_back(rem);
            n=n/10;
        }
        reverse(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==x && i==0) return false;
            if(arr[i]==x && i!=0) return true;
        }
        return false;
    }
};