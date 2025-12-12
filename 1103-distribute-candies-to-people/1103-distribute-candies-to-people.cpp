class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>arr;
        int a=num_people*(num_people+1)/2;
        if(a<candies){
            int i=num_people;
            while(i>1){
                arr.push_back(i);
                candies-=i;
                i--;
            }
            arr.push_back(candies);
            reverse(arr.begin(),arr.end());
        }
        else{
            int i=1;
            while(candies>=i){
                arr.push_back(i);
                candies-=i;
                i++;
            }
            arr.push_back(candies);
        }
        return arr;
    }
};