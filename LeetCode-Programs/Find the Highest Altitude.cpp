class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> vec;
        int alt=0;
        vec.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            alt=vec[i]+gain[i];
            vec.push_back(alt);
        }
        int ans=vec[0];
        for(int i=1;i<vec.size();i++)
        {
            if(vec[i]>ans)
                ans=vec[i];
        }
        return ans;
    }
};







class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0, alt=0;
        for(int i=0;i<gain.size();i++)
        {
            alt=alt+gain[i];
            if(alt>ans)
                ans=alt;
        }
        return ans;
    }
};
