class Solution {
public:
    bool winnerOfGame(string colors) {
        int acnt=0,bcnt=0;
        for(int i=1; i<colors.size()-1; i++){
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A') acnt++;
            if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B') bcnt++;
        }
        if(acnt>bcnt) return true;
        return false;
    }
};