class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
        //runtime  2ms with O(n) Time complexity to visit all the elements of an
        //array
        int k=0;
        for(auto &i: nums)
        {
            if(i != val)
            {
                nums[k++] =i;
            }
        }
        return k;
        */
        
        
        // STL approach
        auto it = remove(nums.begin(), nums.end(),val);
        return it - nums.begin();
        

        /*  
        //runtime is 3ms , O(N) complexity but worstcase of all elements same as val
        // multiple overwrite happens.
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
        */
    }
};