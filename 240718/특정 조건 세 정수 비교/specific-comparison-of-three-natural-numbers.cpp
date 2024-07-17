#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==min(min(a,b),c))
        cout<<1<<" ";
    else
        cout<<0<<" ";
    if(a==b&&b==c)
        cout<<1;
    else
        cout<<0;
}