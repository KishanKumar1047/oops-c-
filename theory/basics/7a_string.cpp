#include<iostream>
using namespace std ;


int main () {
	
	// string concatenaton
	string r1 = " Ram" ; // also "ram _"
	string r2 = "Sita" ;
	// string r = r1 + " " + r2;
	// cout <<r ;
	
	// append
	string r = r1.append(r2) ;
	cout <<r;
	return 0;
	
}
