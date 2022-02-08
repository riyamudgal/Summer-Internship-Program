class Solution {
public:
    int tribonacci(int n) {
        //tle
        /*if (n==0)
            return  0;
        if (n==1 || n==2)
            return 1;            
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);*/
      
        int arr[n+3];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<=n;i++)
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        return arr[n];
    }
};
