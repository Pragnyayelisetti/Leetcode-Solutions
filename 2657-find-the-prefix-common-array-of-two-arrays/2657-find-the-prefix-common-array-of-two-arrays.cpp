class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans(A.size());
        unordered_map<int,int>freq;
        int cnt=0;
        for(int i=0; i<A.size(); i++){
            freq[A[i]]++;
            freq[B[i]]++;
            if(A[i]==B[i] && freq[A[i]]==2 && freq[B[i]]==2) cnt++;
            else if(A[i]!=B[i] && freq[A[i]]==2 && freq[B[i]]==2) cnt+=2;
            else if((freq[A[i]]==2 && freq[B[i]]!=2) || (freq[A[i]]!=2 && freq[B[i]]==2)) cnt++;
            ans[i]=cnt;
        }
        return ans;
    }
};