class Solution {
public:
    bool isLeapYear(int n){
        if((n%100==0 && n%400!=0) || n%4!=0) return false;
        return true;
    }
    int dayOfYear(string date) {
        //31 --> 1 , 3 , 5 , 7 , 8 , 10 , 12
        //30 --> 4 , 6 , 9 , 11
        //28 or 29 --> 2
        string year=date.substr(0 , 4);
        int y=stoi(year);
        string month=date.substr(5 , 2);
        int m=stoi(month);
        string dat=date.substr(8 , 2);
        int d=stoi(dat);
        int cnt=0;
        for(int i=1; i<m; i++){
            if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
                cnt+=31;
            }
            else if(i==4 || i==6 || i==9 || i==11) cnt+=30;
            else{
                if(isLeapYear(y)) cnt+=29;
                else cnt+=28;
            }
        }
        cnt+=d;
        return cnt;
    }
};