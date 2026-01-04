class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int s=0;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];
            int sum=0,cnt=0;
            for(int j=1; j<=sqrt(x); j++){
                if(x%j==0){
                    if(j==x/j){
                        cnt+=1;
                        sum = sum + j;
                    }
                    else{
                        cnt+=2;
                        sum = sum + j+ x/j;
                    }
                }
            }
            if(cnt==4){
                s=s+sum;
            }
        }
        return s;
    }
};