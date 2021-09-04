class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int left=accumulate(nums.begin(),nums.begin()+i,0);
            int right=accumulate(nums.begin()+i+1,nums.end(),0);
            
            if(left==right)
                return i;
        }
        
        return -1;
    }
};

/*
accumulate(first, last, sum);
first, last : first and last elements of range whose elements are to be added
sum :  initial value of the sum
*/
