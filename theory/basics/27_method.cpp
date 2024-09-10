// class attributes = variable in class
// class method = function in class

// #include<iostream>
// #include<string>
// 
//using namespace  std ;
// // inside the class - defining method   
// 
//class myclass {
// 	public :
// 		void mymethod () {
// 			cout << "hello , world !" ;
//		 }
// };
// 
//int main () {
//	myclass myobj ;
//	myobj.mymethod() ;
//	
//	return 0;
//	
//} 

// method - outside the class
#include<iostream>
#include<string>
 
using namespace  std ;

class myclass{
	public :
		void mymethod() ;
};

void myclass :: mymethod () { // method definition outside the class
	
	cout << "printing , hello world !" ;
} ;

int main () {
	
	myclass myobject ;
	myobject.mymethod() ;
	
	return 0;
}

