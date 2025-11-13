class Solution {
public:
    int maxOperations(string s) {
        //2 0 1 0
        //2 0 1 1 2 0 0 1 0
        //21
        int cnt=0;
        vector<int>arr;
        int c=-1;
        if(s[s.size()-1]=='0'){
            for(int i=0; i<s.size()-1; i++){
                if(s[i]=='1'){
                    if(c==-1) c=i;//0
                    else{
                        arr.push_back(i-c-1);
                    }
                    c=i;//1
                }
            }
            //01000
            if(s.size()!=1 && c!=-1){
                arr.push_back(s.size()-1-c);
            }
        }
        else{
            for(int i=0; i<s.size(); i++){
                if(s[i]=='1'){
                    if(c==-1) c=i;//0
                    else{
                        arr.push_back(i-c-1);
                    }
                    c=i;//1
                }
            }
        }
        //for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=0){
                cnt+=i+1;
            }
        }
        return cnt;
    }
};