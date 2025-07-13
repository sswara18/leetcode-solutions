public class BestTimetoBuyandSellStock {
    public int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update minimum price so far
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // Update max profit if current profit is higher
            }
        }
        return maxProfit;
    }
}
