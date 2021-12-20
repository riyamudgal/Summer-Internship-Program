class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        res=0
        costs.sort()
        for i in costs:
            if coins>=i:
                coins=coins-i
                res=res+1
        return res
