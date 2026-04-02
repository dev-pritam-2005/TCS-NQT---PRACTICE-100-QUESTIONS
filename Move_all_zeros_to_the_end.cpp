#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> moveAllZeros(vector<int> &arr)
    {
        vector<int> tempArr(arr.size(), 0);
        int index = 0;

        // Step 1: Copy non-zero elements
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                tempArr[index++] = arr[i];
            }
        }

        // Step 2: Copy back to original array
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = tempArr[i];
        }

        return arr;
    }
};

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    Solution sol;

    vector<int> result = sol.moveAllZeros(arr);

    cout << "Array after moving zeroes: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}