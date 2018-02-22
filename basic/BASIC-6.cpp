#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
int a[40][40];
int main() {
    memset(a, 0, sizeof(a));

    int n; cin>>n;
    if (n==1) {
        cout<<1<<endl; return 0;
    }
    a[0][0]=1;
    a[1][0]=1; a[1][1]=1;
    for (int i=2; i<n; i++) {
        a[i][0]=1;
        for (int j=1; j<i+1; j++) {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
