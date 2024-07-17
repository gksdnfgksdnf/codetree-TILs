#include <iostream>
using namespace std;

int main() {
    int h,w,b;
    cin>>h>>w;
    b = (10000*w)/(h*h);
    cout << fixed;
    cout.precision(0);
    cout<<b;
    if(b>=25)cout<<"Obesity";
}