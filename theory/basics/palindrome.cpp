#include<iostream>
#include<string>
#include<vector>
using namespace std ;

// class Solution {
// public:
// time exceed

//     bool isPalindrome(int x) {
//         string s = to_string(x) ;
//         int n = s.size();
//         int i = 0;
//         int j = n - 1;
//         bool check;
//        while(i<=j) {
//          check = false ;
//         if (s[i]==s[j]) {
//             check = true;
//             i++ ;
//             j-- ;
//         }
//        }
//        if (check == true) return true;
//        else return false ;
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {
     long long reversedig = 0;
     long long n = x;
     if (x<0) return false  ;
        while (n!= 0 and n>0) {
            long long  digit = n%10;
            reversedig = reversedig * 10 + digit ;
            n  =n/10; 
        }



        if(x ==reversedig) return true;
        else return false;
    }
};


int  main ()
{
    int x = 121 ;
    Solution obj;
    cout<<obj.isPalindrome(x);

return 0;
}

