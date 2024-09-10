// constructor - special method that is automatically called when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ()
// always public & no return value

#include<iostream>
#include<string>
 
using namespace  std ;

class myclass{
		public :
			myclass () ;
		
};

myclass :: myclass() {
	cout<<"defining constructor outside the class" ;
} ;

int main () {
	
	myclass myobj ;
	return 0;
}



