// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

     int count =0;
     int maxcount =0;
     cout<<"nums.size()"<< nums.size()<<endl;
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
        maxcount=max(count, maxcount);
     }
     return (maxcount);
    }
};

