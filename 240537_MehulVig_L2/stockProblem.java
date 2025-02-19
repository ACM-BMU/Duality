public class stockProblem {

    public static int buyNSellStocks(int prices[]){

        int maxProfit = 0;
        int buyPrice = Integer.MAX_VALUE;

        for(int i = 0; i < prices.length; i++){
            if(prices[i] > buyPrice){
                int profit = prices[i] - buyPrice;

                maxProfit = Math.max(profit, maxProfit);
            }else{
                buyPrice = prices[i];
            }
        }
        return maxProfit;
    }
    public static void main(String[] args) {
        int prices[] = {7, 1, 5, 3, 6, 4};
        int prices2[] = {7, 6, 4, 3, 1};

        System.out.println("Maximum profit is : "+ buyNSellStocks(prices));
        System.out.println("Maximum profit is : "+ buyNSellStocks(prices2));
    }
}
