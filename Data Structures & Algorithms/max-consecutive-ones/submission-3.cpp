// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

     int count =0;
     int maxcount =0;
     for (auto i= 0; i< nums.size(); i++)   
     {
        if(nums[i])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count > maxcount) { maxcount = count; }
     }
     return (maxcount);
    }
};

