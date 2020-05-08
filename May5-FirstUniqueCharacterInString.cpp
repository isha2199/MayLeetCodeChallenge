class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        int arr[26];
        int index = -1;
        
        for(int i=0;i<26;i++)
            arr[i]=0;
        
        for (int i = 0; i < s.length(); i++)
            arr[s[i] - 97]++;
            
        for (int i = 0; i < s.length(); i++)
            if (arr[s[i] - 97] == 1 )
                return index = i;  
            
        return index;
    }
};
