class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                f=1;
                break;
            }
        }
            if(f==1)
                return true;
            else
                return false;
    }
};
