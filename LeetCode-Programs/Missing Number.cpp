class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length=nums.size();
        int sum1=0,sum2=0,ans=0;
        
        sum1=accumulate(nums.begin(),nums.end(),sum1);
        sum2=length*(length+1)/2;
        
        ans=abs(sum1-sum2);
        return ans;
    }
};
