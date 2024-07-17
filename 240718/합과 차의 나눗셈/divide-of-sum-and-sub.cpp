#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout << fixed;
    cout.presicion(2);
    cout<<(a+b)/(a-b);
}