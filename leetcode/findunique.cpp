// find unique element in n time complexiy 
// XOR BIT OPERATOR

#include <iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        int ans = 0;  // Initialize ans to 0
        for (auto x : nums)  // Iterate through each element in the vector nums
            ans ^= x;  // XOR the current element x with ans
        return ans;  // Return the final value of ans, which is the unique element
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2} ;
    Solution obj;
    cout<<obj.singleNumber( nums);
  
    return 0;
}


// 3. **XOR Operation**:
//    ```cpp
//    ans ^= x;
//    ```
//    - For each element `x` in the array, `ans` is XORed with `x`.
//    - The XOR operation has the following key properties:
//      - `a ^ a = 0`: XORing a number with itself results in 0.
//      - `a ^ 0 = a`: XORing a number with 0 leaves the number unchanged.
//    - As you iterate through the array, pairs of duplicate numbers will cancel each other out (i.e., their XOR will be 0), and the only number left in `ans` will be the one that does not have a duplicate.

// Consider the array `nums = [4, 1, 2, 1, 2]`.

// - Initialize `ans = 0`.
// - Iterate through the array and apply the XOR operation:
//   - `ans = 0 ^ 4 = 4`
//   - `ans = 4 ^ 1 = 5`
//   - `ans = 5 ^ 2 = 7`
//   - `ans = 7 ^ 1 = 6`
//   - `ans = 6 ^ 2 = 4`
