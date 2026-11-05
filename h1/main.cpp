#include <iostream>

using namespace std;

void calcSum(int frst, int scnd) {
    int sum = frst + scnd;
    cout << sum << endl;
}

void calcDiv(int frst, int scnd) {
    if (scnd == 0) {
        cout << "Error: The divisor can't be zero!" << endl;
    } else {
        float quotient = frst / scnd;
        cout << quotient << endl;
    }
}

int retSum(int frst, int scnd) {
    return frst + scnd;
}

float retDiv(int frst, int scnd) {
    if (scnd == 0) {
        throw std::runtime_error("The divisor can't be zero!");
    } else {
        return frst / scnd;
    }
}

int main()
{
    int a;
    int b;

    int result;

    cout << "Input a number: ";
    cin >> a;

    cout << "Input another number: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    retSum(a, b);
    try {
        result = retDiv(a, b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error &error) {
        cout<<"Error: "<< error.what()<< endl;
    }

    return 0;
}
