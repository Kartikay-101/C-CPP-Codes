// WAP of Factoial of number in CPP?
#include<iostream>
using namespace std;

long long factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if(number < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    }
    else {
        cout << "Factorial of " << number << " = " << factorial(number) << endl;
    }

    return 0;
}