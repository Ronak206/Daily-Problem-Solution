class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int size = nums.size();
        for(int p = 0 ;p < size ; p++)
        {
            //do -1 because over iteration start with 0.
            int index = abs(nums[p]) - 1;

            //if you come first then this will make you -ve.
            //if you are not first then it will make you +ve, mean you are repeater😅.
            nums[index] = nums[index] * (-1);

            //+ve value go to the condition ane code is end.
            //think about that why i return nums[p].
            if(nums[index] > 0)
                return abs(nums[p]);
        }

        //and if you are here mean no +ve valve are there mean no double and more occure.
        return -1; 
    }
    //:)
};