class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count_inc=1, count_dec=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1])
                count_dec++;
            if(nums[i]<=nums[i+1])
                count_inc++;
        }
        if(count_dec==nums.size() || count_inc== nums.size())
            return true;
        return false;
        
    }
};
