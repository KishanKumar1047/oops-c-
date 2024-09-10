// access specifier through inheritance


#include<iostream>
#include<string>
 
using namespace  std ; 

class employee {
	protected :
		int salary ;
};

class master : public employee {
	public :
		int bonus;
		void setsalary(int s) {
				salary = s ;
		}
		int getsalary() {
			return salary ;
		}
};

int main () {
	master obj1 ;
	obj1.setsalary(90000) ;
	obj1.bonus = 10000 ;
	cout  << obj1.getsalary() << " is salary of master and bonus is " <<obj1.bonus ;
	cout<< " \n total income is :" <<obj1.getsalary() + obj1.bonus ;
	
	return 0;

}
