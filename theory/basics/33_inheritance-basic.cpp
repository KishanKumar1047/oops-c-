// inheritance = from parent class to derived class
// for code reusuability
#include<iostream>
#include<string>
 
using namespace  std ;

class motihari {
	public :
		string locality ;
		void region(){
			cout<<"describing location of " ;
		}
};

class home : public motihari {
	public :
		int housenumber ;
};

int main() {
	home Gupta ;
	Gupta.region();
	Gupta.locality = "Janpul Chowk " ;
	Gupta.housenumber = 89 ;
	
	cout<< Gupta.locality <<"\n" << Gupta.housenumber ;
	return 0;

}
