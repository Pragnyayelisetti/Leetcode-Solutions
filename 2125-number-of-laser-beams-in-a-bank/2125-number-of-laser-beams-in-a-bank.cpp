class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>arr;
        for(int i=0; i<bank.size(); i++){
            int cnt=0;
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j]=='1') cnt++;
            }
            if(cnt!=0) arr.push_back(cnt);
        }
        int ans=0;
        if(arr.size()==0 || arr.size()==1) return 0;
        for(int i=0; i<arr.size()-1; i++){
            ans += arr[i]*arr[i+1];
        }
        return ans;
    }
};