class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {        
        int n=nums.size();
        unordered_map<int, int> m;
        for(int i=0;i<n-1;i++){
            if(nums[i]==key)
                m[nums[i+1]]++;
        }
        
        int ke=0;
        int val=0;
        for (auto i : m){
            if(i.second>val){
                ke= i.first;
                val=i.second;
            }
        }
        return ke;
    }
};
