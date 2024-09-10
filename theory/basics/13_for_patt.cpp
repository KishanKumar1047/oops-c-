// for loop -- star pattern

// q. Try For Each loop

#include<iostream>
using namespace std;

int main () {
	  for (int i = 1 ;i<6 ; i++) {
	  	for(int j = 0 ;j<i ; j++) {
	  		cout<< "*" ;
		  }
		  cout<<"\n" ; // triangle star pattern
	  }
	  return 0;
}


#include<iostream>
using namespace std;

int main () {
	int k = 1;
	  for (int i = 1 ;i<6 ; i++) {
	  	for(int j = 1 ;j<=i ; j++) {
	  		cout<< k << " " ;  // numeric star pattern
	  		k++ ;
		  }
		  cout<<"\n" ;
	  }
	  return 0;
}


#include<iostream>
using namespace std;

int main () {
	char yes = 'a' ;
	  for (int i = 1 ;i<6 ; i++) {
	  	for(int j = 0 ;j<i ; j++) { // char pattern
	  		cout<< yes ;
	  		yes ++ ;
		  }
		  cout<<"\n" ;
	  }
	  return 0;
}
