class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zcnt1=0,zcnt2=0;
        long long sum1=0,sum2=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]==0) zcnt1++;
            sum1+=nums1[i];
        }
        for(int i=0; i<nums2.size(); i++){
            if(nums2[i]==0) zcnt2++;
            sum2+=nums2[i];
        }
        if(zcnt1==0 && sum1<sum2+zcnt2) return -1;
        if(zcnt2==0 && sum2<sum1+zcnt1) return -1;
        long long a=sum2+zcnt2-sum1-zcnt1;
        if(a>=0) return sum2+zcnt2;
        else return sum1+zcnt1;
    }
};