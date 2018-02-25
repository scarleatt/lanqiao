#include <iostream>
#include <math.h>
using namespace std;
int is_prim(int n) {
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0) {
            return 0;
        }
    return 1;
}
int main() {
    int a,b; cin>>a>>b;
    int i=0,j=0,k,isfirst=1,temp;
    for (i=a; i<=b; i++) {
        if (is_prim(i)) {
            cout<<i<<"="<<i<<endl; continue;
        }
        cout<<i<<"=";
        temp=i;
        while (temp!=1) {
            for (k=2; k<=temp; k++) {
                if (temp%k==0 && is_prim(k)) {
                    if (!isfirst) cout<<"*";
                    cout<<k;
                    if (isfirst) isfirst=0;
                    temp/=k; break;
                }
            }
        }
        cout<<endl;
        isfirst=1;
    }
    return 0;
}
