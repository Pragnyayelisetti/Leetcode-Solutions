class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=0;
        for(int i=0; i<colors.size(); i++){
            int j=colors.size()-1;
            while(j>=0){
                if(colors[i]!=colors[j]) maxi=max(maxi , abs(j-i));
                j--;
            }
        }
        return maxi;
    }
};