class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        bool no_space = false;
        int size = s.size();
        int count = 0;

        for(int p = size - 1 ; p >= 0 ; p--)
        {
            if(s[p] != ' ')
            {
                count++;
                no_space = true;
            }
            else
            {
                if(no_space)
                    return count;
            }
            
        }

        return count;
    }
    //:)
};