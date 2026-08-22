class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int number = n;
        while(number>0)
        {
            sum+=(number%10);
            product*=(number%10);
            number/=10;
        }
        int total = sum + product;
        return (total>0 && n%total==0);
    }
};