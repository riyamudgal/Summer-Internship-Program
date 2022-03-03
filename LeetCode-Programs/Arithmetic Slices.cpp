class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+2; j<nums.size(); j++)
            {
                if(nums[i+1]-nums[i]==nums[j]-nums[j-1])
                    count++;
                else
                    if(nums[i+1]-nums[i]!=nums[j]-nums[j-1])
                        break;
            }
        }
        return count;
    }
};
