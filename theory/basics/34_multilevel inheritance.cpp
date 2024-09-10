// multilevel inheritance

#include<iostream>
#include<string>
 
using namespace  std ;

class grandfather {
	public :
		void relation() {
			cout<<"this is basic example of multilevel inheritance." ;
		}
};

class father : public grandfather {
	public :
		void method () ;
};
class child : public father {
	public :
		void method2() ;
};

int main () {
	child obj;
	obj.relation() ;
	
	return 0;
	
}
