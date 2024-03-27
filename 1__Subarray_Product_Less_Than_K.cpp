class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        // approach 1 - bruth force T.C O(n^2)
        // int count = 0;
        // int size = nums.size();

        // for(int p = 0 ; p < size ; p++)
        // {
        //     int mul = 1;
        //     for(int r = p ; r < size ; r++)
        //     {
        //         mul = mul * nums[r];
        //         if(mul < k) count++;
        //         else break;
        //     }
        // }
        // return count;



        // approach 2 - sliding window T.C. O(n)
        if(k <= 1) return 0;

        int total = 0,mul = 1;
        int size = nums.size();

        for(int start = 0,end = 0; end < size ; end++)
        {
            //add mul.. that number and store in mul.😊
            mul *= nums[end];

            //check if thet mul is greater then k then divide strt with starting
            //and after doing this start++.
            while(mul >= k)
            {
                mul /= nums[start++];
            }

            //the window btw start and end add them in ans and +1 for that purticular number
            //this is the trick that how i found
            total += end - start + 1;
        }
        
        //after doing this all return total😎
        return total;  

        //if you don't understand then don't worry do a paperwork✍🏼
    }
    //:)
};