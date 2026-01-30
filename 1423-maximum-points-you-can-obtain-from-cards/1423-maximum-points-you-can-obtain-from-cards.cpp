class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size()-k;
        int sum=0;
        for(int i=0; i<n; i++) sum += cardPoints[i];
        int mini=sum;
        for(int i=n; i<cardPoints.size(); i++){
            sum += cardPoints[i]-cardPoints[i-n];
            mini=min(mini , sum);
        }
        int s=0;
        for(int i=0; i<cardPoints.size(); i++) s+=cardPoints[i];
        return s-mini;
    }
};