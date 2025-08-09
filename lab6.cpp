#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
class Box {
    T value;
public:
    Box(T v) { value = v; }
    void show() { cout << value << endl; }
};

int main() {
    cout << add(3, 4) << endl;
    cout << add(2.5, 3.5) << endl;

    Box<int> b1(100);
    Box<string> b2("Hello");
    b1.show();
    b2.show();

    return 0;
}
