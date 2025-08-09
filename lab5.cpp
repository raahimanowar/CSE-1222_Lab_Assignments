#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    v.push_back(60);
    for (int x : v) cout << x << " ";
    cout << endl;

    v.pop_back();
    for (int x : v) cout << x << " ";
    cout << endl;

    v.insert(v.begin() + 2, 25);
    for (int x : v) cout << x << " ";
    cout << endl;

    v.erase(v.begin() + 1);
    for (int x : v) cout << x << " ";
    cout << endl;

    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;

    vector<int> other = {100, 200, 300};
    v.swap(other);
    for (int x : v) cout << x << " ";
    cout << endl;
    for (int x : other) cout << x << " ";
    cout << endl;

    v.clear();
    cout << v.size() << endl;

    return 0;
}
