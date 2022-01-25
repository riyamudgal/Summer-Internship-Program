class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int temp=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]==arr[i])
                return false;
            if(arr[i-1]>arr[i])
            {
                if(i==1)
                    return false;
                else 
                    temp=1;
            }
            if(arr[i-1]<arr[i] and temp==1)
                return false;
        }
        if(temp==1)
            return true;
        return false;
    }
};
