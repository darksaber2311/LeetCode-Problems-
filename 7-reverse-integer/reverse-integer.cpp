class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        //int n=1;
        long int rev = 0;
        int num = x;
        int size = 0;
        while(num!=0)
        {
            num/=10;
            size++;
        }
        num = x;
        while(size>0)
        {
            rem = num%10;
            rev = rev+rem*pow(10,size-1);
            if(rev<pow(-2,31) || rev > pow(2,31)-1)
            {
                return 0;
            }
            num = num/10;
            //n++;
            size--;
        }
       
        //if(x<0)
        //{
         //   return -123%10;
        //}
        return rev;
        
    }
};