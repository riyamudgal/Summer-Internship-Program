class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*int f=0,res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                f=1;
                res=i;
                break;
            }
        }
            if(f==1)
                return res;
            else
                return -1;*/
        int start=0, end= nums.size()-1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            if(target== nums[mid])
                return mid;
            if(target> nums[mid]){
                if(nums[mid]> nums[start] || target<= nums[end])
                    start= mid+1;
                else
                    end= mid-1;
            }
            else if(target< nums[mid]){
                if(nums[end]> nums[mid] || nums[start]<= target)
                    end= mid-1;
                else
                    start= mid+1;
            }
        }
        return -1;
    }
};
