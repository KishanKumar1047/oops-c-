#include<iostream>
using namespace std ;
// use of while loop
int main () {
	
	int i = 1;
	while(i<=5) {
		cout<< "*" ;
	cout << "\n" ;
	i ++ ;
    }
	return 0;
}

// do- while loop

#include<iostream>
using namespace std;

int main () {
	
	int i = 0;
	do {
		cout<< i <<"\n" ;
		i++ ;
	}
	while(i<5) ;
	return 0;
}

// table 
#include<iostream>
using namespace std;

int main () {
	int m;
	int n = 1 ;
	cout << "Enter the number : " ;
	cin >> m;
	while (n <= 10) {
		cout << m << "X" << n << "=" << m*n <<"\n" ;
		
		n ++ ;
	}
	return 0;
}


