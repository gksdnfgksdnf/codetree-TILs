#include <iostream>
using namespace std;

int main() {
    double a,b;
    cout << fixed;
    cout.precision(0);
    cin>>a>>b;
    cout<<a+b<<" ";
    cout.precision(1);
    cout<<<<(a+b)/2;
}