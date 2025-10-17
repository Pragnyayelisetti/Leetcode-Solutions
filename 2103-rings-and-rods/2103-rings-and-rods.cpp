class Solution {
public:
    int countPoints(string rings) {
        vector<string>arr(10 , "");
        for(int i=1; i<rings.size(); i+=2){
            arr[rings[i]-'0']+=rings[i-1];
        }
        //for(int i=0; i<10; i++) cout<<arr[i]<<" ";
        int cnt=0;
        for(int i=0; i<arr.size(); i++){
            int b=0,g=0,r=0;
            for(int j=0; j<arr[i].size(); j++){
                if(arr[i][j]=='B') b=1;
                if(arr[i][j]=='G') g=1;
                if(arr[i][j]=='R') r=1;
            }
            if(b && g && r) cnt++;
        }
        return cnt;
    }
};