class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> c;
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums.begin(),nums.end(),nums[i])==1)
                return nums[i];
        }
        return 0;
    }
};
