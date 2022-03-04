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






//optimised
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0, ans=0;
        for(int i=1; i<nums.size()-1; i++)
        {
            if(nums[i]-nums[i-1]==nums[i+1]-nums[i])
            {
                count++;
                ans=ans+count;
            }
            else
                count=0;
        }
        return ans;
    }
};
