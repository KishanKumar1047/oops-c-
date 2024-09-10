// multiple inheritance - more than one base class

#include<iostream>
#include<string>
 
using namespace  std ; 

class base1 {
	public :
		void method1(){
			cout << "Hello base 1" ;
		}
};  
class base2 {
	public :
		void method2 () {
			cout <<"hello base 2" ;
		}
};

class derived : public base1,public base2 {
	public :
		void method3 () ;
	
};

int main () {
	derived obj;
	obj.method1() ;
	cout <<"\n" ;
	obj.method2() ;
	
	return 0;
}

