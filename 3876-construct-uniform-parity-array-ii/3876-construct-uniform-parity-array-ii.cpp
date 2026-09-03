class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin() , nums1.end());
        //even check
        //odd - odd = even , if even continue
        int f=0,fl=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2!=0 && f==0){
                fl=1;
                f=1;
                break;
            }
        }
        if(fl==0) return true;
        //odd check
        int f1=0,fl1=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2==0 && f1==0){
                fl1=1;
                f1=1;
                break;
            }
            else if(nums1[i]%2!=0) f1=1;
        }
        if(fl1==0) return true;
        return false;
    }
};