class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int s=nums.size(), i=0, j=1;
        while(i<s && j<s)
        {
            if(nums[i]%2==0)
                i=i+2;
            else if(nums[j]%2==1)
                j=j+2;
            else
                swap(nums[i], nums[j]);
        }
        return nums;
    }
};
