class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mul=1,digit;
        while (n!=0)
        {
            digit=n%10;
            sum=sum+digit;
            mul=mul*digit;
            n=n/10;
        }
            return mul-sum;
    }
};
