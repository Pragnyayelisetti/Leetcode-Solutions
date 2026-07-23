class Solution {
public:
    vector<int>nums;
    void solve(int cnt , int num , vector<int>& digits , vector<bool>& check){
        if(cnt==3){
            nums.push_back(num);
            return;
        }
        if(cnt==0){
            for(int i=0; i<digits.size(); i++){
                if(!check[i] && digits[i]!=0){
                    num=num*10+digits[i];
                    check[i]=true;
                    solve(cnt+1 , num , digits , check);
                    check[i]=false;
                    num/=10;
                }
            }
        }
        else if(cnt==2){
            for(int i=0; i<digits.size(); i++){
                if(!check[i] && digits[i]%2==0){
                    num=num*10+digits[i];
                    check[i]=true;
                    solve(cnt+1 , num , digits , check);
                    check[i]=false;
                    num/=10;
                }
            }
        }
        else{
            for(int i=0; i<digits.size(); i++){
                if(!check[i]){
                    num=num*10+digits[i];
                    check[i]=true;
                    solve(cnt+1 , num , digits , check);
                    check[i]=false;
                    num/=10;
                }
            }
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<bool>check(digits.size() , 0);
        solve(0 , 0 , digits , check);
        unordered_set<int>s(nums.begin() , nums.end());
        nums.assign(s.begin() , s.end());
        sort(nums.begin() , nums.end());
        return nums;
    }
};