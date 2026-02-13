class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //2 , 1 , 2 , 2 , 3 , 2 , 4 , 2
        unordered_map<int,int>freq;
        // k=3
        int cnt=0;
        for(int num:nums) freq[num]++;
        /*
            2 --> 2
            5 --> 1
            4 --> 7
            3 --> 2
        */
        for(int i=0; i<nums.size(); i++){
            int x=k-nums[i];//2
            if(freq[nums[i]]>0) freq[nums[i]]--;//
            else continue;
            if(freq[nums[i]]==0) freq.erase(nums[i]);
            if(freq[x]>0 && freq.find(x)!=freq.end() && x>0){
                cnt++;//4
                freq[x]--;//3
                if(freq[x]==0) freq.erase(x);
            }
        }
        return cnt;
    }
};