class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        /*int a,b, n=nums.size();
        
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
        if(nums.empty())
        {
            a=-1;
            b=-1;
        }
        nums.clear();                 //for clearing the vector, so that new desired elements can be pushed
        nums.push_back(a);
        nums.push_back(b);
        return nums;
        */
        vector<int> vec;
        int first=-1, last=-1, start=0, end=nums.size()-1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            if(nums[mid]<target)
                start=mid+1;
            else if(nums[mid]>target)
                end=mid-1;
            else if(nums[mid]==target){
                //t temp=mid;
                while(mid>0 && nums[mid-1]==target)
                    mid--;
                first=mid;
                while(mid<nums.size()-1 && nums[mid+1]==target)
                    mid++;
                last=mid;
                
                vec.push_back(first);
                vec.push_back(last);
                return vec;
            }
        }
        vec.push_back(-1);
        vec.push_back(-1);
        return vec;
    }
};
