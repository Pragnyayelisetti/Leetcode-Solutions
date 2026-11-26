class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        if(n>=10 and n<19) return true;
        if(n>=19 and n<27) return false;
        if(n>=27 and n<34) return true;
        if(n>=34 and n<40) return false;
        if(n>=40 and n<45) return true;
        if(n>=45 and n<49) return false;
        if(n>=49 and n<52) return true;
        if(n>=52 and n<54) return false;
        if(n>=54 and n<55) return true;
        return false;
    }
};