class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int>arr;
        arr.push_back(releaseTimes[0]);
        for(int i=1; i<releaseTimes.size(); i++){
            arr.push_back(releaseTimes[i]-releaseTimes[i-1]);
        }
        int maxi=INT_MIN;
        char ans='a';
        for(int i=0; i<arr.size(); i++){
            if(maxi==arr[i]) ans=max(ans , keysPressed[i]);
            else if(maxi<arr[i]){
                maxi=arr[i];
                ans=keysPressed[i];
            }
        }
        return ans;
    }
};