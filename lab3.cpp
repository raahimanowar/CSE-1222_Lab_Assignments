#include <iostream>

using namespace std;

class Num {
public:
    int number;

    Num() {
        number = 0;
        cout << "Default: number is " << number << endl;
    }


    Num(int x) {
        number = x;
        cout << "Parameterized: number is " << number << endl;
    }

    Num(const Num& a) {
        number = a.number;
        cout << "Copy: number is " << number << endl;
    }

    ~Num() {
        cout << "Destroyed: number was " << number << endl;
    }
};

int main() {
    Num n1;
    Num n2(11);
    Num n3 = n2;

    return 0;
}
