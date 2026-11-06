#include <iostream>

using namespace std;

void calcSum(int frst, int scnd) {
    int sum = frst + scnd;
    cout << sum << endl;
}

void calcDiv(int frst, int scnd) {
    if (scnd == 0) {
        cout << "Error: Divisor Can't be zero!" << endl;
    } else {
        int quotient = frst / scnd;
        cout << quotient << endl;
    }
}

int retSum(int frst, int scnd) {
    return frst + scnd;
}

float retDiv(int frst, int scnd) {
    if (scnd == 0) {
        throw std::runtime_error("Divisor Can't be zero");
    } else {
        return frst / scnd;
    }
}

int main()
{
    int a;
    int b;

    int quotient;

    cout << "Input a number: ";
    cin >> a;

    cout << "Input another number: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sum = retSum(a, b);
    cout << sum << endl;

    try {
        quotient = retDiv(a, b);
        cout << a << "/" <<  b << " = " << quotient << endl;
    } catch (runtime_error &error) {
        cout<<"Error: "<< error.what()<< endl;
    }

    return 0;
}
