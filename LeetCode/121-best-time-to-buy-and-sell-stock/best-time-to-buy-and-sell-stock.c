int maxProfit(int* prices, int pricesSize) {

    int maxProfit = 0;
    int minPrice = prices[0];

    for(int i=0; i<pricesSize; i++){
        if(prices[i]<minPrice){
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if(profit>maxProfit){
            maxProfit = profit;
        }
        
    }
    return maxProfit;
}