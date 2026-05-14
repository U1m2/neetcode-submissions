class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        /*
        //random memory increase
        int actualsize = nums.size();

        for(int i=0;i<actualsize;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
        */
        int n = nums.size();

        nums.reserve(2*n);
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};