class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int actualsize = nums.size();

        for(int i=0;i<actualsize;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
  
    }
};