class Solution {
public:
    string winningPlayer(int x, int y) {
        int a=min(x,y/4);
        if(a%2==1){
            return "Alice";
        }
        return "Bob";
    }
};