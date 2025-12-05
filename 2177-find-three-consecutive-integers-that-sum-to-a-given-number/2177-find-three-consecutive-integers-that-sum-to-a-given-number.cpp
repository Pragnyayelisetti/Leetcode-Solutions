class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>arr;
        if(num%3!=0) return arr;
        long long a=num/3;
        arr.push_back(a-1);
        arr.push_back(a);
        arr.push_back(a+1);
        return arr;
    }
};