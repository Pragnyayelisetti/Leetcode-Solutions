class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        //we need to check if it is the kth root of any number in the range l to r
        if(k==1) return r-l+1;
        long long i=0;
        int cnt=0;
        while(pow(i , k)<=r){
            long long a= pow(i ,k);
            if(a>=l && a<=r) cnt++;
            i++;
        }
        return cnt;
    }
};