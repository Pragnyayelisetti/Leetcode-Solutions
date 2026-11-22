class Solution {
public:
    int minRange(int a, int b, int c) {
        int x=max(a,max(b,c));
        int y=min(a,min(b,c));
        int z=a+b+c-x-y;
        int ans=min(x-y, z);
        return ans;
    }
};