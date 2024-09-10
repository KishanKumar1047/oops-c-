// adding parameters to method
#include<iostream>
#include<string>
 
using namespace  std ;

class myclass{
	public :
		int mymethod(int filenumber) ;
};

int myclass :: mymethod (int filenumber) { // method definition outside the class
	
	return filenumber ;
} ;

int main () {
	
	myclass myobject ;
	cout<<myobject.mymethod(28) ; // calling method 
	
	return 0;
}
