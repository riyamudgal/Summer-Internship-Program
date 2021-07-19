class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums.begin(),nums.end(),nums[i])==1)
                return nums[i];
        }
        return 0;
    }
};


#using binary search

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<h) 
        {
        int mid=(l+h)/2;
        if (mid%2==1) 
        {
                if (nums[mid-1]==nums[mid]) 
                {
                    l=mid+1;
                } 
            else 
            {
                    h=mid;
            }
        } 
            else 
            {
                if (nums[mid]!=nums[mid+1]) 
                {
                    h=mid;
                }
                else 
                {
                    l=mid+1;
                }
            }
        } 
        return nums[l];
    }
};
