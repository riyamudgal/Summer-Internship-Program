class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n1,n2, prod=1, prod1=1, sub=0;
        sort(nums.begin(), nums.end());
        int s=nums.size();
        n1=nums[s-1];
        n2=nums[s-2];
        prod=n1*n2;
        
        prod1=nums[0]*nums[1];
        
        sub=prod-prod1;
        return sub;
        //return nums[nums.size()-1]*nums[nums.size()-2]-nums[0]*nums[1];
    }
};
