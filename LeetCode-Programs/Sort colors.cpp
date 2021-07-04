class Solution {
public:
     void sortColors(vector<int>& nums) {
      vector<int> vec;                              
		
		for(int i=0; i<=2; i++)                     
        {
            for(int j=0; j<nums.size(); j++)      
            {
                if(nums[j]==i)                   
                {
                    vec.push_back(nums[j]);
					
                }                
            }
			
        }
        nums=vec;                                
    }
};



//with using sort function

class Solution {
public:
     void sortColors(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       }
};
