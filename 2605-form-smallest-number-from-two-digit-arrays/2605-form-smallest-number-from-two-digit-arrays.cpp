class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mini = *min_element(nums1.begin(), nums1.end());
        int mini1 = *min_element(nums2.begin() , nums2.end());
        int a=min(mini*10+mini1 , mini1*10+mini);
        unordered_set<int>uni(nums1.begin() , nums1.end());
        nums1.assign(uni.begin() , uni.end());
        unordered_set<int>u(nums2.begin() , nums2.end());
        nums2.assign(u.begin() , u.end());
        int b=INT_MAX;
        vector<int>arr;
        for(int i=0; i<nums1.size(); i++) arr.push_back(nums1[i]);
        for(int i=0; i<nums2.size(); i++) arr.push_back(nums2[i]);
        map<int,int>freq;
        for(int i=0; i<arr.size(); i++) freq[arr[i]]++;
        for(auto it:freq){
            if(it.second==2){
                b=it.first;
                break;
            };
        }
        int ans = min(a ,b);
        return ans;
    }
};