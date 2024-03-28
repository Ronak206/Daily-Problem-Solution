class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        unordered_map<long long,long long> mp;
        int ans = 0;
        int start = -1;

        for(int end = 0 ; end < nums.size() ; end++)
        {
           mp[nums[end]]++;
           while(mp[nums[end]] > k)
           {
                //above we do start = -1 there for i do start++ here
                start++;
                mp[nums[start]]--;
           }

           //here end - start give that window where ans lie
           ans = max(ans,end - start);
        }

        //after all return ans
        return ans; 
    }
    //:)
};