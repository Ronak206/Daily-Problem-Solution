class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        /* bruth force with some extra space here some extra space is map */

        // vector<int> v;
        // unordered_map<int,int> m;

        // for(auto p : nums) m[p]++;

        // for(auto p : m)
        // {
        //     if(p.second == 2) v.push_back(p.first);
        // }
        // return v;



        /*now do with O(1) S.C beacuse we can't consider ans space as code space*/
        //only 6 line of code😎
        
        vector<int> v;
        for(auto p : nums)
        {
            p = abs(p);
            if(nums[p-1] > 0)  nums[p-1] *= -1;
            else v.push_back(p);
        }
        return v;
    }
    //:)
};