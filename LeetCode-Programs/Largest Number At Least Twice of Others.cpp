class Solution {
public:
    int dominantIndex(vector<int>& nums) { 
        int a=*max_element(nums.begin(),nums.end()), ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a) 
            {
                ans=i; 
                continue;
            }
            if(nums[i]*2>a) 
                return -1;
        }
        return ans;
    }
};
