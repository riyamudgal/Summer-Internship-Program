class Solution {
public:
    int minOperations(vector<int>& nums) {
        /*if(nums.size()==1)
            return 0;*/
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                res=res+nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return res;
    }
};
