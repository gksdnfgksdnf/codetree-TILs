#include <iostream>
using namespace std;

int main() {
    double a,b;
    cout << fixed;
    cout.precision(2);
    cin>>a>>b;
    cout<<(a+b)/(a-b);
}