class Solution {
public:
    string convertToBase7(int num) {
        int ans=0, temp=1;
        while(num!= 0)
        {
            ans=ans+(num%7)*temp;
            num=num/7;
            temp=temp*10;
        }
        return to_string(ans);
    }
};
