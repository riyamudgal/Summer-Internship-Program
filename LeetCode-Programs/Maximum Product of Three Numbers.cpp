class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp1=1;
        int temp2=1;
        int ans;
        int n=nums.size()-1;
        temp1=nums[n]*nums[n-1]*nums[n-2];
        temp2=nums[n]*nums[0]*nums[1];
        ans=max(temp1, temp2);
        return ans;
    }
};
