#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<(n%2==0?:(n%5==0?:"true":"false"):n%3==0?n%5==0?"true":"false":"false");
}