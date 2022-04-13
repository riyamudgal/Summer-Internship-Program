class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int temp;
        while(nums.size()>1){
            vector<int> newNums;
            for(int i=0;i<nums.size()-1;i++){
                temp=(nums[i]+nums[i+1])%10;
                newNums.push_back(temp);
            }
            nums=newNums;
        }
        return nums[0];
    }
};
