class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count  = 0;
       /* if(coins<costs[0])
        {
           return 0;
        }*/
        int i=0;
        
        while(i<costs.size())
        {
            coins = coins - costs[i];
            i++;
            if(coins<0)
            {
                return count;
            }
            count++;
        }
        return count;
    }
};