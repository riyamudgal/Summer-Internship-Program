class Solution {
public:
    bool search(vector<int>& nums, int target) {
        /*int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                f=1;
                break;
            }
        }
            if(f==1)
                return true;
            else
                return false;*/
        int start=0, end= nums.size()-1;
        
        while(start<=end){
            int mid= start+(end-start)/2;
            
            if(nums[mid]==target)
                return true;
            
            if((nums[start]==nums[mid]) && (nums[end]==nums[mid])){
                start++;
                end--;
            }
            else if (nums[start]<= nums[mid]){
                if((nums[start]<=target) && (nums[mid]> target))
                    end= mid -1;
                else
                    start= mid+1;
            }
            else{
                if((nums[mid]< target) && (nums[end]>= target))
                    start= mid+1;
                else
                    end= mid-1;
            }
        }
        return false;
    }
};
