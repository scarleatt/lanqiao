#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int c,d,e;
    for (int i=101; i<=999; i++) {
        e=i%10;
        d=i/10%10;
        c=i/100;
        if (i==e*e*e+d*d*d+c*c*c)
            cout<<i<<endl;
    }
    return 0;
}
