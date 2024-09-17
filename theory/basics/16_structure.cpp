#include <iostream>
#include <string>

using namespace std;

int main()
{

	struct
	{
		int year;
		string model;
	} car1, car2; // same struct for different structure variable

	car1.year = 2020;
	car1.model = "volvo";

	car2.year = 2022;
	car2.model = "mahindra";

	cout << "car1 is of year : " << car1.year << " and model is : " << car1.model;
	cout << ".\n";
	cout << "car2 is of year : " << car2.year << " and model is : " << car2.model;

	return 0;
}
