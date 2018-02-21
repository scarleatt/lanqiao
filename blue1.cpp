#include <iostream>
using namespace std;
int f[1000000+5];
int main() {
    int n;
    cin>>n;
    if (n==1 || n==2) {
        cout<<1; return 0;
    }
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i<n; i++) {
        f[i] = (f[i-1] + f[i-2])%10007;
    }
    cout<<f[n-1];
    return 0;
}
