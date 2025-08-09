#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r; imag = i;
    }
    Complex operator + (Complex other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}
