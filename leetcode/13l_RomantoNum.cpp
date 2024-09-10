#include<iostream>
#include<string>
#include<vector> // Include vector to store integer values
using namespace std;

class Solution {
public:
    int convert(char ch) {
        switch(ch) {
            case 'I' :
                return 1;
            case 'V' :
                return 5;
            case 'X' :
                return 10;
            case 'L' :
                return 50;
            case 'C' :
                return 100;
            case 'D' :
                return 500;
            case 'M' :
                return 1000;
            default :
                return 0;
        }
    }

    int romanToInt(string s) {
        vector<int> k; // Use vector<int> to store the integer equivalents

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            int m = convert(ch);
            k.push_back(m);
        }

        int sum = 0;
        for (int i = 0; i < k.size(); i++) {
            if (i < k.size() - 1 && k[i] < k[i + 1]) {
                sum += k[i + 1] - k[i];
                i++; // Skip the next element since it's already used
            } else {
                sum += k[i];
            }
        }
        return sum; // Return the final sum
    }
};

int main () {
    string s;
    cin >> s;

    Solution obj;
    cout << obj.romanToInt(s) << endl;

    return 0;
}
