#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    cout<<(a%3==0?1:a%5==0?1:0);
}