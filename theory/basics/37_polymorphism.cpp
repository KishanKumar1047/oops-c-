// polymorphism -  different form for same method

#include<iostream>
#include<string>
 
using namespace  std ;
class animal {
	public :
		void animalsound() {
			cout<<"the sound of aniamls" ;
		}
};

class pig : public animal {
	public :
		void animalsound() {
			cout<<"the sound is wee-wee" ;
		}
			
};

class dog : public animal {
	public :
		void animalsound() {
			cout<<"the sound is bhow-bhow" ;
		}
};

int main () {
	
	animal ani1;
	pig pig1;
	dog dog1;
	
	ani1.animalsound() ;
	cout<<"\n" ;
	pig1.animalsound() ;
	cout<<"\n" ;	
	dog1.animalsound() ;
	
	return 0;
}
