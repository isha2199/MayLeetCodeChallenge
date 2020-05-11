class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long x = (long)num;
        for(long i=1; i*i <= x; i++) 
            if(x%i == 0 && x/i == i)
                return true;
        return false;
    }
};
