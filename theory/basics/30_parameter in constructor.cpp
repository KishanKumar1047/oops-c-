// constructor - parameters

#include<iostream>
#include<string>
 
using namespace  std ;

class myclass{ // class with name myclass
		public : // access specifier
			string brand; // attributes
			string model ; // attributes
			int year ; //attributes
			myclass (string x , string y , int z) ; // constructor with parameter
};

myclass :: myclass(string x , string y , int z) { // defining constructor outside the class
	brand = x ;
	model = y ;
	year = z ;
} ;


int main () {
	
	myclass myobj1("mahindra","scorpio",1999) ; //  defining obj1 for class with arguments
	myclass myobj2("suzuki","wagonR",1994) ; // defining obj2 and calling constructor  with different value
	
	cout<<"brand =" <<myobj1.brand <<" & model ="<<myobj1.model<<" & year ="<<myobj1.year<<"\n" ; // print values
	cout<<"brand =" <<myobj2.brand <<" & model ="<<myobj2.model<<" & year ="<<myobj2.year<<"\n" ;
	return 0;
}
