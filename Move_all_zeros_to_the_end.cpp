//brue force
/*
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
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to move zeroes to the end
    void moveZeroes(vector<int>& nums) {
        // Pointer to the first zero
        int j = -1;

        // Find the first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, return
        if (j == -1) return;

        // Start from the next index of first zero
        for (int i = j + 1; i < nums.size(); i++) {
            // If current element is non-zero
            if (nums[i] != 0) {
                // Swap with nums[j]
                swap(nums[i], nums[j]);
                // Move j to next zero
                j++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);

    // Print the result
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}







