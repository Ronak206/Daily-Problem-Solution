class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        long ans = 0;
        bool minFound = false,maxFound = false;
        int start = 0;
        int minStart = 0,maxStart = 0;
        int size = nums.size();

        for(int p = 0 ; p < size ; p++)
        {
            int num = nums[p];
            if(num < minK || num > maxK)
            {
                //mean not in over ans region
                minFound = false;
                maxFound = false;

                //not start++ just go one step cross to the p.
                start = p + 1;
            }

            if(num == minK)
            {
                minFound = true;
                minStart = p;
            }

            if(num == maxK)
            {
                maxFound = true;
                maxStart = p;
            }

            if(maxFound && minFound)
            {
                //if you found both add them in this calculation
                ans += min(minStart,maxStart) - start + 1;
            }
        }
        
        return ans;
    }
    //:)
};