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


/*The accumulate method in c++ used to find the array sum. This function can be accessed from the numeric library in c++.

Syntax
accumulate(array_name , array_name+length , sum);
*/
