#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    if(m>2&&m<6)
        cout<<"Spring";
    else if(m>5&&m<9)
        cout<<"Summer";
    else if(m>8&&m<12)
        cout<<"Fall";
    else
        cout<<"Winter";
}