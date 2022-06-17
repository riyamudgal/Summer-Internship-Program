class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        sort(nums.begin(), nums.end());
        /*for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i]+ nums[j]> nums[k] )
                        count++;
                }
            }
        }*/
        for(int i=nums.size()-1; i>1; i--){
            int left=0, right=i-1;
            while(left<right){
                if(nums[left] + nums[right] > nums[i]){
                    count += (right-left);
                    right--;
                }
                else
                    left++;
            }
        }
        return count;
    }
};
