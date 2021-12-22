class Solution {
public:
    bool check(vector<int>& nums) {
        int  count=0,size=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
                count++;
        }
        if(count==1 && nums[0]>=nums[size-1])
            return true;
        else if(count>=1)
            return false;
        return true;
    }
};
