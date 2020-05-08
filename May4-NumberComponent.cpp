class Solution {
public:
    int findComplement(int num) {
        
        int x=num;
        if(num==0) 
            return 1;
        
        vector<int> v;
        while(x)
        {
            v.push_back(x&1 ? 0:1);
            x>>=1;
        }
        
        int sum=0,cnt=0;
        
        for(int i=0 ; i<v.size() ; i++)
        {
            sum += v[i]*pow(2,cnt);
            cnt++;
        }
        
        return sum;
    }
};
