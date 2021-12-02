class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> num;
        for(int i=0;i<arr.size();i++)
        {
            int count =0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            if(count==arr[i])
                num.push_back(arr[i]);
        }
        sort(num.begin(),num.end());
        if(num.size()==0)
            return -1;
        return num[num.size()-1];
    }
};
