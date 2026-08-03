class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int mins=prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i]<mins){
                mins=prices[i];
            }else{
                maxp=max(maxp,prices[i]-mins);
            }
        }
        return maxp;
    }
};