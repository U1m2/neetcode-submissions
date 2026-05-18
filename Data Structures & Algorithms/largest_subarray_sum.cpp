//Largest sub array 
#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int main()
{
    vector<int> a ={1,-4,5,7,-2,8};
    
    int maxsum =INT_MIN, currsum =0, start=0, Tempstart=0, end =0;
    
    for(int i=0;i< a.size();i++)
    {
        currsum  +=  a[i];
        
        if(currsum > maxsum)
        {
            maxsum= currsum;
            start = Tempstart;
            end =i;
        }
        
        if(currsum <0)
        {
            currsum= 0;
            Tempstart = i+1; // dont consider the current index as the actual start
        }
    }
    
    
    //To print the sub array
    cout<<"largest subarray "<<"\n";
    for(int i=start;i<=end; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
}
