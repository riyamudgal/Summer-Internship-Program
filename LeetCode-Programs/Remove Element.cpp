class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=distance(nums.begin(), remove(nums.begin(), nums.end(), val));
        return ans;
    }
    
};
