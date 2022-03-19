class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i=left; i<=right;i++){
            int temp=i;
            while(temp>0){
                int res=temp%10;
                if( res==0 || i%res!=0){
                    break;
                }
                temp=temp/10;
            }
            if(temp==0)
                vec.push_back(i);
        }
        return vec;
    }
};
