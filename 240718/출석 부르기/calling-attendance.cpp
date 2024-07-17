#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    cout<<(a==1?"John":a==2?"Tom":a==3?"Paul":"Vacancy");
}