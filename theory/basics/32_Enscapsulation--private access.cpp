// accessing private attributes through public method
// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// through get and set method in public it can be achieved

#include<iostream>
#include<string>
 
using namespace  std ;

class Employee {
	private :
		int salary ;
	public :
		void setsalary(int s) { // set method
			salary = s ;
		}
		int getsalary(){ // get method
			return salary ;
		}
};

int main () {
	Employee obj ;
	obj.setsalary(50000) ;
	cout<<obj.getsalary() ;
	
	return 0;
}
