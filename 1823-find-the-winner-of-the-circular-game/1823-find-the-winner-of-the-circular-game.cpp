class Solution {
public:
    int recursive_sol(vector<int> &arr ,int i, int k){
        if(arr.size()==1) return arr[0];
        int index = (i+k-1)%arr.size();
        arr.erase(arr.begin() + index) ;
        return recursive_sol(arr , index%arr.size() , k);
    }
    int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        int ans=recursive_sol(arr , 0 , k);
        return ans;
    }
};