class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin() , prices.rend());
        sort(discounts.rbegin() , discounts.rend());
        double sum=0;
        for(int i=0; i<min(prices.size() , discounts.size()); i++){
            sum+=(double)prices[i]*((100.0-(double)discounts[i])/100.0);
        }
        for(int i=min(prices.size() , discounts.size()); i<prices.size(); i++) sum+=prices[i];
        return sum;
    }
};