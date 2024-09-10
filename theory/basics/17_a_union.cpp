// union 

#include<iostream>
#include<string>

using namespace std ; 

union money{ // union provide one access one time and take storage of bigger value
	int rice;
	char car;
	float pounds ;
};

int main() {
    money m1;
    m1.rice = 10;   // Assign value to rice
    m1.car = 'v';   // Assign value to car, overwriting the previous value in rice
    
    cout << m1.rice;  // Output may not be as expected because m1.rice was overwritten
    cout << m1.car;   // Output will be 'v'
    return 0;
}
