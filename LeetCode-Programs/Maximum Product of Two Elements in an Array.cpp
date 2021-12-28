class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),  nums.end());
        int num1=0;
        num1=nums[nums.size()-1]-1;
        int num2=0;
        num2=nums[nums.size()-2]-1;
        return num1*num2;
    }
};
