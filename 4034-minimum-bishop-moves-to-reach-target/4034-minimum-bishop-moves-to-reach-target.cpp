class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(((source[0]+source[1])%2!=0 and (target[0]+target[1])%2==0) || ((source[0]+source[1])%2==0 and (target[0]+target[1])%2!=0)) return -1;
        if(abs(source[0]-target[0])==abs(target[1]-source[1])) return 1;
        return 2;
    }
};