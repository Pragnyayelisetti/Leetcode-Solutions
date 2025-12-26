class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=0;
        for(char ch:customers){
            if(ch=='Y') penalty++;
        }
        int mini=penalty,idx=0;
        for(int i=0; i<customers.size(); i++){
            if(customers[i]=='Y') penalty-=1;
            else penalty+=1;
            if(mini>penalty){
                mini=penalty;
                idx=i+1;
            }
        }
        return idx;
    }
};