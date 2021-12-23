class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int temp1=0, temp2=0, ans=0;
        int ma=nums[0];
        for(int i=1;i<nums.size();i++)
        ma=max(ma,nums[i]);
        
        int mi=nums[0];
        for (int i=1;i<nums.size(); i++)
        mi=min(mi,nums[i]);
        
        for(int i=0;i<nums.size();i++)
        {
            if(mi==nums[i])
                temp1=i;
            if(ma==nums[i])
                temp2=i;
        }
        if(temp1>temp2) 
            swap(temp1,temp2);
        ans=min(nums.size()-temp1 , temp1+1+nums.size()-temp2);
        return min(temp2+1, ans);
        
        
    }
};
