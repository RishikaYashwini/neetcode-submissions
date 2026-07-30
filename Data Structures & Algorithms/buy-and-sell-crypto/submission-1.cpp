class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int res = INT_MIN;
        for(int i = 0 ; i < prices.size(); i++){
            for(int j = i+1 ; j<prices.size(); j++){
                int profit = 0;
                if(prices[i]<=prices[j]){
                    profit = prices[j]-prices[i];
                }
                else{
                    profit = 0;
                }
                res = max(res,profit);
            }
        }
        return res;
    }
};
