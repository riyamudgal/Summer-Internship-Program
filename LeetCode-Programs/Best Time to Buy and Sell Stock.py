class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxp=0
        temp=prices[0]                                 
        for i in range(len(prices)): 
            if temp>prices[i]:
                temp=prices[i]
                
            if (prices[i]-temp) > maxp:
                maxp=prices[i]-temp
        return maxp;
