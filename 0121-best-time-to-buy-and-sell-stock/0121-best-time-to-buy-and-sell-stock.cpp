class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
         int buy=prices[0];

        for(int i=1; i<prices.size();i++){
            // int buy=prices[i];
            if(prices[i]>buy){
                diff=max(diff, prices[i]-buy);
            }
         buy=min(buy, prices[i]);

        }
       return diff;
    }
};