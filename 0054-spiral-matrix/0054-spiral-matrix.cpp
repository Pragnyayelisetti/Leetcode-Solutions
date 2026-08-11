class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>arr;
        int top=0,bottom=n-1,left=0,right=m-1;
        while(left<=right && top<=bottom){
            for(int i=left; i<=right; i++){
                arr.push_back(matrix[top][i]);
            }
            top++;//1
            for(int i=top; i<=bottom; i++){
                arr.push_back(matrix[i][right]);
            }
            right--;//2
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;//1
            }
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
};