// members - attributes & method
//  Access specifiers define how the members  of a class can be accessed
// that is , public or private or protected - accessed outside the class or not
// by default all members are private...lollll-socho

#include<iostream>
#include<string>
 
using namespace  std ;

class myclass {
	public :
		int x;
	private :
		int y ;
};

int main() {
	
	myclass obj1;
	obj1.x = 90 ;
	obj1.y = 86;
	
	cout <<obj1.x ;
	cout<<obj1.y ;
	
	return 0;
}
// will have error bcz of private attribute can't be accessed outside the class.
