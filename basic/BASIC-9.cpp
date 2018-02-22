#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c,d,e,f=0, isback=1;
    for (int i=10001; i<=999999; i++) {
        e=i%10;
        d=i/10%10;
        c=i/100%10;
        b=i/1000%10;
        a=i/10000%10;
        f=0;
        if (i>99999) {
            f=i/100000;
            if (f!=e || d!=a || c!=b) isback=0;
        } else {
            if (a!=e || b!=d) isback=0;
        }
        if (isback && a+b+c+d+e+f==n)
            cout<<i<<endl;
        isback=1;
    }
    return 0;
}
