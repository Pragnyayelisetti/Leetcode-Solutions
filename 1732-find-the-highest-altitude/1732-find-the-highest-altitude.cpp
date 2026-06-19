class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int x=0;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0; i<gain.size(); i++){
            arr.push_back(x+gain[i]);
            x=x+gain[i];
        }
        int max=*max_element(arr.begin(),arr.end());
        return max;
    }
};