// basic of fxn

#include<iostream>
using namespace std ;

//void myfxn () {
//	cout << "i got executed" ;
//} 
//
//int main () {
//	
//	myfxn() ;
//	return 0;
//}
//
//void fxn(string name) {
//	cout <<name << " kumar" ;
//}

//int main () {
//	fxn("Arjun") ;
//	cout <<"\n" ;
//	fxn("Kishan") ;
//	return 0;
//}

// use of return - then use of int not void

int fxn(int x) {
	return 5 + x ;
	
} 

int main () {
	cout<<fxn(3);
	cout <<"\n" ;
	cout<<fxn(12);
	
	return 0;
}
