class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        for(int i=0; i<apple.size(); i++){
            sum += apple[i];
        }
        sort(capacity.rbegin() , capacity.rend());
        int s=0;
        for(int i=0; i<capacity.size(); i++){
            s+=capacity[i];
            if(s>=sum) return i+1;
        }
        return 0;
    }
};