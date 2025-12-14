class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        /*
        3 2 1
        */
        //return (k+1)*tickets[k]+(tickets.size()-1-k);
        int i=0,ans=0;
        while(tickets[k]>0){
            tickets[i]--;//3 , 0 , 0 , 0
            if(tickets[i]>=0) ans++;//5
            i++;//1
            if(i>=tickets.size()) i=0;
            if(tickets[i]<=0) i++;
            if(i>=tickets.size()) i=0;
        }
        return ans;
    }
};