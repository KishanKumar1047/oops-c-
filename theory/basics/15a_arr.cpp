#include<iostream>
using namespace std;

int main () {
	string arr[5] ;
	arr[0] = "ram" ;
	arr[1] = "shyam" ;
	arr[2] = "ravan" ;
	arr[3] = "aam" ;
	arr[4] = "kaam" ;
	cout<<sizeof(arr)/sizeof(arr[0])<<"\n" ;// length of array
		arr[2] = "roja" ;

	for (int i = 0 ;i<5 ; i++) {
		cout<<arr[i]<<endl;
	}
//	arr[2] = "roja" ;
//	cout<<arr[2];
	return 0;
}
