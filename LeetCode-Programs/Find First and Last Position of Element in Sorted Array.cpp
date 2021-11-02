class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a,b, n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                a=i;
                break;
            }
            else if(i==n-1 )
            {
                a=-1;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
            if(nums[j] == target)
            {
                b=j;
                break;
            }
            else if(j == 0)
            {
                b=-1;
            }
        }
        if(nums.empty())             //Returns whether the vector is empty
        {
            a=-1;
            b=-1;
        }
        nums.clear();                 //for clearing the vector, so that new desired elements can be pushed
        nums.push_back(a);
        nums.push_back(b);
        return nums;
    }
};
