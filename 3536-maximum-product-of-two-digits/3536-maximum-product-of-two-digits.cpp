class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n){
            arr.push_back(n%10);
            n=n/10;
        }
        sort(arr.rbegin() , arr.rend());
        return arr[0]*arr[1];
    }
};