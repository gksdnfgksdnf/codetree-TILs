#include <iostream>
#include <string>
using namespace std;

int main() {
    string p,a,b;
    cin >> p;
    a = p.substr(4, 4);
    b = p.substr(9, 4);
    cout << "010-" << b << "-" << a;
}