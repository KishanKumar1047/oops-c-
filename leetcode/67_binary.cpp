#include<iostream>
#include<string>
#include<vector>
using namespace std ;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        
        // Make both strings of equal length by padding with '0's
        if (a.size() < b.size()) {
            a.insert(0, b.size() - a.size(), '0');
        } else {
            b.insert(0, a.size() - b.size(), '0');
        }
        
        // Traverse both strings from end to start
        for (int i = a.size() - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            carry = sum / 2;  // Calculate the carry for the next iteration
            res.insert(0, 1, (sum % 2) + '0');  // Append the current bit to the result
        }
        
        // If there is still a carry left, prepend it to the result
        if (carry) {
            res.insert(0, 1, '1');
        }
        
        return res;
    }
};
