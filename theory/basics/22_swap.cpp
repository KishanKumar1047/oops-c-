 // swaping of two numbers using function
//
//#include<iostream>
//using namespace std ;
// call by reference
//int swap(int &x,int &y) {
//	int z = x;
//	x =	y;
//	y = z;
//}
//int main(){
//	int num1 = 10, num2 = 20;
//	cout<<"number before swaping is : " ;
//	cout<<num1 << "and " <<num2 ;
//	
//	
//	swap(num1 , num2) ;
//	cout << "After swapping is :";
//	cout<< num1 ;
//	cout <<"\n" ;
//	cout << num2;
//	return 0;
//	
//}


#include<iostream>
using namespace std ;

void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
int main(){
    int x =4, y=5; // without &(refrence) , it is ike cthis x & y.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); 
    cout<<"The value of x is "<<x<< " and the value of y is "<<y<<endl; 
    return 0;
}
