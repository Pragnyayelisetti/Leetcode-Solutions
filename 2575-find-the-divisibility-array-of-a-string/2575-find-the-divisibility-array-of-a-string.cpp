class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>arr;
        // long long n=stoll(word);
        // cout<<n<<endl;
        // return arr;
        long long sum=0;
        for(int i=0; i<word.size(); i++){
            sum = (sum*10 + (word[i]-'0'))%m;
            if(sum==0) arr.push_back(1);
            else arr.push_back(0);
        }
        return arr;
    }
};