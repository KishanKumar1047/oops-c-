// exceptions :try,throw and catch

#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}

// // If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block
// #include <iostream>
// using namespace std;

// int main() {
//   try {
//     int age = 15;
//     if (age >= 18) {
//       cout << "Access granted - you are old enough.";
//     } else {
//       throw 505;
//     }
//   }
//   catch (...) {
//     cout << "Access denied - You must be at least 18 years old.\n";
//   }
//   return 0;
// }
