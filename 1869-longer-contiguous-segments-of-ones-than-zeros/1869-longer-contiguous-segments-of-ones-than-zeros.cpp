class Solution {
public:
    bool checkZeroOnes(string s) {
        int zmaxi=0 , omaxi=0 , zcnt=0,ocnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                zmaxi=max(zmaxi , zcnt);//1
                zcnt=0;//0
                ocnt++;//6
            }
            else{
                omaxi=max(omaxi , ocnt);//6
                ocnt=0;//0
                zcnt++;//1
            }
        }
        zmaxi=max(zmaxi , zcnt);
        omaxi=max(omaxi , ocnt);
        return omaxi>zmaxi;
    }
};