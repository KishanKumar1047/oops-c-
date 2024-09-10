// array - collection of values in single variable
// structure - group of related variable 
// enums - group of constant also unchangeable // why enums on w3

#include<iostream>

using namespace std ;

int main () {
	enum level {
		LOW = 10 , // default values is 0 but we can assign value
		MEDIUM, // default value is low + 1
		High // defalut value is medium + 1
	};
	
	enum level myvar = MEDIUM ;
	
	cout << myvar ;
	
	return 0;
	
}
	

