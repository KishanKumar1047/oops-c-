
#include<iostream>
#include<string>

using namespace std ;

class Hostel {
    public :
        string name;
        void catg () ;

} ;

void Hostel :: catg () {
    cout << " GANDU CHHEE SAB KA " ;
} ;

int main () {
    Hostel obj ;
    obj.name = "Arjun" ;

    cout<<obj.name<<endl ;
    obj.catg() ;

    return 0;
}