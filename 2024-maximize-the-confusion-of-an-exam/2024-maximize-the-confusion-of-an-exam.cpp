class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int tcnt=0,fcnt=0,maxi=0;
        int start=0;
        for(int i=0; i<answerKey.size(); i++){
            if(answerKey[i]=='T'){
                tcnt++;//2
            }
            else{
                fcnt++;
            }
            while(tcnt>k && fcnt>k){
                if(answerKey[start]=='T'){
                    tcnt--;
                }
                else{
                    fcnt--;
                }
                start++;
            }
            maxi = max(maxi , i-start+1);
        }
        return maxi;
    }
};