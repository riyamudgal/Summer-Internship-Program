class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i-1]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
