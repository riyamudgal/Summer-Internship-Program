class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        new_list=heights.copy()
        heights.sort()
        count=0
        for i in range(len(heights)):
            if new_list[i]!=heights[i]:
                count=count+1
        return count
