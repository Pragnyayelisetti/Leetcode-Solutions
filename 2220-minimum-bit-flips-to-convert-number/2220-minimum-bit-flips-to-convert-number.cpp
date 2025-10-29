class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s , g;
        while(start>0){//10>0
            int rem=start%2;//1
            s.push_back(rem+'0');//0101
            start=start/2;//1
        }
        reverse(s.begin() , s.end());//1010
        while(goal>0){
            int rem=goal%2;
            g.push_back(rem+'0');
            goal=goal/2;
        }
        reverse(g.begin() , g.end());//111
        int cnt=0;
        int j=g.size()-1;
        int i=s.size()-1;
        for(; i>=0 && j>=0; i--){
            if(s[i]!=g[j]) cnt++;
            j--;
        }
        if(j>=0){
            for(int k=j; k>=0; k--){
                if(g[k]=='1') cnt++;
            }
        }
        if(i>=0){
            for(int k=i; k>=0; k--){
                if(s[k]=='1') cnt++;
            }
        }
        return cnt;
    }
};