class Solution {
public:
    int minPartitions(string n) {
        char max='0';
        for(char ch:n){
            if(max<ch){
                max=ch;
            }
        }
        int num=max-'0';
        return num;
    }
};