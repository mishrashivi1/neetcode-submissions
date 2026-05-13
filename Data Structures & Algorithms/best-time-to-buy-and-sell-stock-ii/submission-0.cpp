class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int profit=0;
      int stock=prices[0];
      for(int i=1;i<prices.size();i++)
      {
        if(prices[i]>stock)
        {
            profit+=prices[i]-stock;
        }
        stock=prices[i];
      }  
      return profit;
    }
};