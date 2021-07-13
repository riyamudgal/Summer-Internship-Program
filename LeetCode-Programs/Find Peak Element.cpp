class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max= nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==max)
            {
                 return i;
            }
        }
        return 0;
    }
};
