class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>arr;
        for(int i=0; i<mat.size(); i++){
            vector<int>a;
            int m=mat[i].size();
            for(int j=0; j<mat[i].size(); j++){
                //right --> j+k
                //left --> mat[i].size()+j-k
                if(i%2==0){
                    a.push_back(mat[i][(j+k%m)%m]);
                }
                else{
                    a.push_back(mat[i][(m+j-k%m)%m]);
                }
            }
            arr.push_back(a);
        }
        return arr==mat;
    }
};