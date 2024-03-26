class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();

        for(int p = 0 ; p < n ; p++)
        {
            //i want all +ve number.   
            //i want first +ve therefore, i don't care about maximum number.
            //Therefore i do n+1.
            //but why n+1 why not anything it's have reason.
            if(nums[p] <= 0) nums[p] = n + 1;
        }
        
        for(int p = 0 ; p < n ; p++)
        {
            //you only want nums[p]-1 index for make -ve that index.
            //otherwise there is no index that make that index -ve.
            //and if we do missing_number(+ve) + 1 that's over answer.
            if (abs(nums[p]) <= n && nums[abs(nums[p]) - 1] > 0)
                nums[abs(nums[p]) - 1] = nums[abs(nums[p]) - 1] * (-1);
        }

        for (int p = 0; p < n; p++)
        {
            //think why you return p.
            if (nums[p] > 0) return p + 1;
        } 

        //you are here mean all number have in array , so return maximum number.😎 
        return n + 1;
    }
    //:)
};