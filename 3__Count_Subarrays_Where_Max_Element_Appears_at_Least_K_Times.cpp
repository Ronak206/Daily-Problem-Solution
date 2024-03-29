class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        //This is STL inbuild function for finding max element.
        int maxElement = *max_element(nums.begin(),nums.end());
        long long ans = 0;

        //Here start is the starting index for sliding window
        //and end is the ending index for the sliding window.
        for(int start = 0,end = 0;end < nums.size() ; end++)
        {
            if(nums[end] == maxElement)
            {
                //-- because i am at index where max element live.
                //and this is for increase the window.
                k--;
            }

            while(!k)
            {
                //This loop for decrease the window
                //Think why i do k++ here.
                if(nums[start] == maxElement)    k++;
                start++;
            }
            ans = ans + start;
        }
        
        //return ans.
        return ans;
    }
    //:)
};