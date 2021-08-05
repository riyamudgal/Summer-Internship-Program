class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,start=0,area=0;
        int end=height.size()-1;
    
        while (start<end)
        {
            area=(end-start)*min(height[start], height[end]);
            ans=max(ans,area);
        
            if (height[start]<height[end])
                start=start+1;
            else
                end=end-1;
        }
        return ans;
    }
};
