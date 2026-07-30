class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        for(int i=0; i<word.size(); i++){
            if(i<=7) cnt++;
            else if(i<=15) cnt+=2;
            else if(i<=23) cnt+=3;
            else cnt+=4;
        }
        return cnt;
    }
};