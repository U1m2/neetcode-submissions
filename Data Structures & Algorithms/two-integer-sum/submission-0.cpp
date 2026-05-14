class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        for(int i=0;i<nums.size();i++)
        {
            int diff  = target - nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(diff == nums[j])
                {
                    pos.push_back(i);
                    pos.push_back(j);
                    break;
                }
            }
        }
        return pos;
    }
};
