class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi=0;
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        while(i>=0){
            if(i<=j){
                if(nums1[i]<=nums2[j]){
                    maxi=max(maxi , j-i);
                    i--;
                }
                else{
                    while(j>i && nums1[i]>nums2[j]){
                        j--;
                    }
                    if(nums1[i]<=nums2[j]) maxi=max(maxi , j-i);
                    i--;
                }
            }
            else{
                i--;
            }
        }
        return maxi;
    }
};