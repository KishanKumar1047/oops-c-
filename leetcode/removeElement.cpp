
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5};
    int val = 2;

    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    cout<<k;

    return 0;
}