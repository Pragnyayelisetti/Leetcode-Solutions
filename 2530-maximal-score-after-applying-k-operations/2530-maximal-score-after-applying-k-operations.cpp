class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i=0; i<nums.size(); i++) q.push(nums[i]);
        long long score=0;
        while(k--){
            int a=q.top();
            score += a;
            q.pop();
            int x=(a+2)/3;
            q.push(x);
        }
        return score;
    }
};