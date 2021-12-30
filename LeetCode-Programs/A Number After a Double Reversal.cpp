class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int rev=0;
        while(temp>0)
        {
            rev=rev*10 + temp%10;
            temp=temp/10;
        }
        temp=rev;
        int temp2=0;
        while(temp>0)
        {
            temp2=temp2*10+temp%10;
            temp=temp/10;
        }
        if(num==temp2)
            return true;
        else
            return false;
    }
};
