class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
        int k=0;
        for(auto &i: nums)
        {
            if(i != val)
            {
                nums[k] =i;
                k++;
            }
        }
        return k;
        */
        int n = nums.size();
        int i=0; // starting index of the array
        while(i< n)
        {
            if(nums[i]== val) 
            {
                nums[i] = nums[n-1];
                n= n-1; //Replacing the last element of an array to the current.
                // Not incrementing the current index because this needs to be 
                // re-evaluated.
            }
            else
            {
                i++;
            }
        }
        return n ; // this is the count of valid element
    }
};