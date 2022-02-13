class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        new_list=[]
        maxx=max(candies)
        for i in candies:
            if i+extraCandies>=maxx:
                new_list.append(True)
            else:
                new_list.append(False)
        return new_list
