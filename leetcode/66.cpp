#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> digits = {9, 9};
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i] += 1;
        }
            // If the digit is 9, set it to 0 (carry over)
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        for(int i = 0 ; i<digits.size(); i++){
            cout<<digits[i]<<" ";
        }
        
        return 0;
    }