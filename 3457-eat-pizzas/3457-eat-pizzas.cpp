class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        //day 1 : 
        //1 , 2 , 3 ,4  , 5 , 6 , 7 ,8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 ,18 , 19 , 20
        //20
        //5/2==2 -->odd
        //4/2==2 -->even
        //1 , 2 , 3 , 12 --> 4 , 5 , 6 , 7
        //12 + 10 +9 --> 31 +24 = 55
        long long ans=0;
        sort(pizzas.rbegin() , pizzas.rend());
        int n=pizzas.size()/4;//2
        //1 1 1 1 1 1 1 2
        if(n%2==0){
            int a=n/2;//2
            for(int i=0; i<a; i++){
                ans += pizzas[i];//2
            }
            n-=a;
            for(int i=a+1; i<=pizzas.size() && n>0; i+=2){
                ans += pizzas[i];
                n--;
            }
        }
        else{
            int a=(n+1)/2;
            for(int i=0; i<a; i++){
                ans += pizzas[i];
            }
            n-=a;
            for(int i=a+1; i<=pizzas.size() && n>0; i+=2){
                ans += pizzas[i];
                n--;
            }
        }
        return ans;
    }
};