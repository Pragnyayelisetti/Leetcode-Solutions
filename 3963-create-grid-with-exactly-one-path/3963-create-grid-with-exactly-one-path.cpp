class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>str;
        for(int i=0; i<m; i++){
            string s;
            int k=0;
            for(int j=0; j<n; j++){
                if((i==0 && j<=n/2)|| (i==m-1 && j>=n/2)) s+='.';
                else if((i!=0 && i!=m-1 && j==n/2)) s+='.';
                else s+='#';
                k++;
            }
            str.push_back(s);
        }
        return str;
    }
};