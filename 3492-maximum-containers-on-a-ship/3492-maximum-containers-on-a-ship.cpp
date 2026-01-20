class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int totaldecks=n*n;
        int x=maxWeight/w;
        return min(totaldecks , x);
    }
};