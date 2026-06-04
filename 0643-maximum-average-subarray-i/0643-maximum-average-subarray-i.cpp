class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        double maxi=avg;
        for(int i=k; i<nums.size(); i++){
            sum+=nums[i];
            sum-=nums[i-k];
            double a=sum/k;
            maxi=max(maxi , a);
        }
        return maxi;
    }
};