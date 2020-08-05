class Solution {
public:
    
    float logn(int l,int r)
    { 
        return log(l)/log(r);  
    }
    
    bool isPowerOfFour(int num) {
        
        if(num==0)
            return false;
     
        return floor(logn(num,4)==ceil(logn(num,4)));
    }
};
