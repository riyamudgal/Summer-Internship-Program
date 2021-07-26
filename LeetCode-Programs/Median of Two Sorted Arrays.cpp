class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median;
        vector<double> vec;
        for(int i=0;i<nums1.size();i++)
        {
            vec.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            vec.push_back(nums2[i]);
        }
        sort(vec.begin(), vec.end());
        int s=vec.size();
        
        int mid=(0+s-1)/2;
        if(s%2==0)
            median=(vec[mid]+vec[mid+1])/2;
        else
            median=vec[mid];
        return median;
    }
};
