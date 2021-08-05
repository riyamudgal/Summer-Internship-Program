class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans=0
        start=0
        end=len(height)-1
    
        while start<end:
            area=(end-start)*min(height[start], height[end])
            ans=max(ans,area)
        
            if height[start]<height[end]:
                start=start+1
            else:
                end=end-1
        return ans
