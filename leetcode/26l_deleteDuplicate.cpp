#include<iostream>
#include<climits>
#include<vector>
using namespace std ;
int  main () 
{
    vector<int> nums = { 1,1,2,2,3,4,5,5};
        if (nums.empty()) return 0;
        
        // `k` will track the position to place the next unique element
        int k = 1;

        // Traverse the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is not equal to the previous one,
            // it is unique and should be moved to the position `k`
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        // `k` now represents the number of unique elements in the array
        cout<<k<<endl;
        for (int i = 0; i < k; i++) {
            cout<<nums[i]<<" ";
        }

   
return 0;
}