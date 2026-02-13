class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans=0;
        sort(skill.begin() , skill.end());
        long long i=0,j=skill.size()-1;
        ans+=skill[i]*skill[j];
        long long x=skill[i++]+skill[j--];
        while(i<j){
            long long s=skill[i]+skill[j];
            if(s==x) ans+=skill[i]*skill[j];
            else return -1;
            i++;
            j--;
        }
        return ans;
    }
};