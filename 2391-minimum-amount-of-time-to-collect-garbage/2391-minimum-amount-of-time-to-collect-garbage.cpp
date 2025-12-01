class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0;
        int n=travel.size();
        int pre[n];
        pre[0]=travel[0];
        //2 6 9
        int pidx=-1,gidx=-1,midx=-1;
        int g=0,m=0,p=0;
        for(int i=1; i<n; i++) pre[i]=pre[i-1]+travel[i];
        for(int i=0; i<garbage.size(); i++){
            for(int j=0; j<garbage[i].size(); j++){
                if(garbage[i][j]=='P'){//i==2
                    if(i==0) ans++;
                    else if(p==1){
                        if(p<=0) ans+=pre[i-1]+1;
                        else ans+=pre[i-1]-pre[pidx-1]+1;
                    }
                    else{
                        ans+=pre[i-1]+1;//3
                        p=1;//1//1
                    }
                    pidx=i;
                }
                if(garbage[i][j]=='G'){
                    if(i==0) ans++;//1
                    else if(g==1){
                        if(g<=0) ans+=pre[i-1]+1;
                        else ans+=pre[i-1]-pre[gidx-1]+1;
                    } 
                    else{
                        ans+=pre[i-1]+1;
                        g=1;
                    } 
                    gidx=i;
                }
                if(garbage[i][j]=='M'){
                    if(i==0) ans++;
                    else if(m==1){
                        if(m<=0) ans+=pre[i-1]+1;
                        else ans+=pre[i-1]-pre[midx-1]+1;
                    } 
                    else{
                        ans+=pre[i-1]+1;
                        m=1;
                    }
                    midx=i;
                }
            }
        }
        return ans;
    }
};