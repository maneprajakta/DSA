class Solution {
public:
    int arrangeCoins(int n) {
    
        int c=0;
        int i=0;
        while(n>=0)
        {
            i++;
            if((n-i)>=0)
            { 
                c++;
            }
            n=n-i;
        }
        return c;
    }
};
