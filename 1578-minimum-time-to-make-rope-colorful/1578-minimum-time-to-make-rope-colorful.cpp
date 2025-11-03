class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int start =0;
        int sum=0;
        int maxi=0;
        for(int end=0; end<colors.size(); end++){
            if(colors[end]==colors[start]){
                maxi = max(maxi ,neededTime[end]);//3
            }
            else{
                sum += maxi;//9
                maxi = 0;
                start = end;
                end--;
            }
        }
        sum += maxi;
        int s=0;
        for(int n:neededTime){
            s+=n;
        }
        return  s-sum;
    }
};