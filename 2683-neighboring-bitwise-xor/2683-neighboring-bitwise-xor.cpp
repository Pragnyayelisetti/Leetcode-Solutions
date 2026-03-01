class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        //1 , 0 -->1 
        //0 , 1 -->1
        //0 , 0 -->0
        //1 , 1 -->0
        int n=derived.size();
        vector<int>arr(n);
        arr[0]=0;//0 , 1 , 0
        int last;
        if(derived[n-1]==0) last=0;
        else last=1;
        for(int i=1; i<n; i++){
            if(arr[i-1]==0 && derived[i-1]==1) arr[i]=1;
            else if(arr[i-1]==1 && derived[i-1]==1) arr[i]=0;
            else if(arr[i-1]==0 && derived[i-1]==0) arr[i]=0;
            else if(arr[i-1]==1 && derived[i-1]==0) arr[i]=1; 
        }
        return last==arr[n-1];
    }
};