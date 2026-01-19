class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>str;
        int maxi=INT_MAX;
        for(int i=0; i<list1.size(); i++){
            for(int j=0; j<list2.size(); j++){
                int sum=i+j;//4
                if(list1[i]==list2[j] && maxi>sum){
                    if(!str.empty()) str.pop_back();
                    str.push_back(list1[i]);
                    maxi=sum;
                }
                else if(list1[i]==list2[j] && maxi==sum){
                    str.push_back(list1[i]);
                }
            }
        }
        return str;
    }
};