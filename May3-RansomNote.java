class Solution {
    public boolean canConstruct(String ransomNote, String magazine) 
    {
        
        if (ransomNote == null) 
             return true;
        if (magazine == null || ransomNote.length()>magazine.length())     
            return false;
        
        int[] frequency = new int[26];     //create a new array
        
        for (int i = 0; i < magazine.length(); i++) 
            frequency[magazine.charAt(i) - 'a']++;

        for (int i = 0; i < ransomNote.length(); i++) 
            if (--frequency[ransomNote.charAt(i) - 'a']  < 0)
                return false;
        
        return true;               //ransomNote can be created using magazine without repetition
    }
}
