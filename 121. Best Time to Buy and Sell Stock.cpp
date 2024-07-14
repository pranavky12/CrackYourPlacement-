class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-minsofar);
            if(prices[i]<minsofar)minsofar=prices[i];
        }
        return maxprofit;
        
    }
};