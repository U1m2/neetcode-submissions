class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++)
        {
            int maxno=0;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j] > maxno)
                {
                    maxno = arr[j];
                }
            }

            arr[i] = maxno;
        }
        arr[arr.size()-1] = -1;

        return arr;
    }
};