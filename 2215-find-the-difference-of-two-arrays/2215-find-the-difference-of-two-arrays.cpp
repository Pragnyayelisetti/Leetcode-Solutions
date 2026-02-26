class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        vector<int>res;
        unordered_set<int>s(nums1.begin() , nums1.end());
        nums1.assign(s.begin() , s.end());
        unordered_set<int>se(nums2.begin() , nums2.end());
        nums2.assign(se.begin() , se.end());
        for(int i=0; i<nums1.size(); i++){
            int f=0;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    f=1;
                    break;
                }
            }
            if(!f) res.push_back(nums1[i]);
        }
        vector<int>a;
        for(int i=0; i<nums2.size(); i++){
            int f=0;
            for(int j=0; j<nums1.size(); j++){
                if(nums1[j]==nums2[i]){
                    f=1;
                    break;
                }
            }
            if(!f) a.push_back(nums2[i]);
        }
        ans.push_back(res);
        ans.push_back(a);
        return ans;
    }
};