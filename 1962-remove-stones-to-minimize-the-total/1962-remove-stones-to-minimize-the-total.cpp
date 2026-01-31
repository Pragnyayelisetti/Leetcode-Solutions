class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum=0,score=0;
        priority_queue<int>q;
        for(int i=0; i<piles.size(); i++){
            sum += piles[i];
            q.push(piles[i]);
        }
        while(k--){
            int x=q.top();
            score += x/2;
            int a=(x+1)/2;
            q.pop();
            q.push(a);
        }
        return sum-score;
    }
};