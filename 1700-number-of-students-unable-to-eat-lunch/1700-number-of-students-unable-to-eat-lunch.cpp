class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int,int>freq1,freq2;
        for(int student:students) freq1[student]++;//1-->4, 0-->2
        for(int s:sandwiches) freq2[s]++;//1-->3 , 0-->3
        int cnt=0;
        for(int i=0; i<sandwiches.size(); i++){
            if(freq1[sandwiches[i]]>0 && freq2[sandwiches[i]]>0){
                cnt++;
                freq1[sandwiches[i]]--;
                freq2[sandwiches[i]]--;
            }
            else break;
        }
        int ans=sandwiches.size()-cnt;
        return ans;
    }
};