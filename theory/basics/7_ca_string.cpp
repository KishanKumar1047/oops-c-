#include<iostream>
using namespace std ;


int main () {
	string fullname ;
	cout<<"enter full name : ";
//	cin>> fullname ; // kishan kumar but only one word will be consider.
	getline (cin,fullname) ; // fullword
	cout<< "\n Your name is " << fullname ;
	return 0;
	
// user input from multiword
	
}
