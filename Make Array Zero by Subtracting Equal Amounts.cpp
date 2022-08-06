class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small=0;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0){
                small= nums[i]; 
                for(int j=0; j<nums.size(); j++){   
					nums[j] = nums[j]-small;   
                }
				 count++;    
            }
        }        
        return count;
    }
};
