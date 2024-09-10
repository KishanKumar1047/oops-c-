#include <iostream>
using namespace std;

class ArrayExample {
private:
    int arr[5];  // Array of integers with a fixed size of 5

public:
    // Constructor to initialize the array with default values
    ArrayExample() {
        for (int i = 0; i < 5; ++i) {
            arr[i] = 0;
        }
    }

    // Function to set value at a specific index
    void setValue(int index, int value) {
        if (index >= 0 && index < 5) {
            arr[index] = value;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Function to get value at a specific index
    int getValue(int index) const {
        if (index >= 0 && index < 5) {
            return arr[index];
        } else {
            cout << "Index out of bounds!" << endl;
            return -1;  // Return an invalid value
        }
    }

    // Function to print all elements of the array
    void printArray() const {
        for (int i = 0; i < 5; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayExample myArray;  // Create an instance of ArrayExample

    myArray.setValue(0, 10);
    myArray.setValue(1, 20);
    myArray.setValue(2, 30);
    myArray.setValue(3, 40);
    myArray.setValue(4, 50);

    cout << "Array elements: ";
    myArray.printArray();  // Print all elements

    cout << "Element at index 2: " << myArray.getValue(2) << endl;

    return 0;
}




// #include <iostream>
// using namespace std;

// class SimpleArray {
// private:
//     int arr[5];  // An array of integers with a fixed size of 5

// public:
//     // Function to set value at a specific index
//     void setValue(int index, int value) {
//         arr[index] = value;
//     }

//     // Function to get value at a specific index
//     int getValue(int index) {
//         return arr[index];
//     }
// };

// int main() {
//     SimpleArray myArray;  // Create an instance of SimpleArray

//     myArray.setValue(0, 10);  // Set the value of the first element to 10
//     myArray.setValue(1, 20);  // Set the value of the second element to 20

//     cout << "Element at index 0: " << myArray.getValue(0) << endl;
//     cout << "Element at index 1: " << myArray.getValue(1) << endl;

//     return 0;
// }
