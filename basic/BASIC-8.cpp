#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int b,c,d,e;
    for (int i=1001; i<=9999; i++) {
        e=i%10;
        d=i/10%10;
        c=i/100%10;
        b=i/1000;
        if (b==e && d==c)
            cout<<i<<endl;
    }
    return 0;
}
