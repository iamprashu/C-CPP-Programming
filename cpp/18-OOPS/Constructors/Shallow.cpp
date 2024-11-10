#include <iostream>
using namespace std;

class Bank {
public:
    int *arr; // Pointer to dynamically allocated array

    // Constructor
    Bank() {
        arr = new int[10]; // Allocate memory for an array of 10 integers
    }

    Bank(const Bank &obj){
        this->arr = obj.arr;
    }

    // Destructor to free allocated memory
    ~Bank() {
        delete[] arr; // Free the allocated memory
    }
};

int main() {
    Bank bank;

    for(int i=0; i<10; i++){
        bank.arr[i] = i+1;
    }
    Bank bold = bank;

    bold.arr[4] = 9090;//this will make the bank also to 9090 as pointing to same memory location

    for(int i=0; i<10; i++){
        cout<<bank.arr[i]<<endl;
    }
    return 0;
}
