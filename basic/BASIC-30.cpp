#include <iostream>
#include <cstring>
using namespace std;
const int MAXN=3000;
int v[MAXN];
int main() {
    memset(v, 0, sizeof(v));
    int n; cin>>n;
    int count=0, temp, i, j;
    v[0]=1;
    for (i=2; i<=n; i++) {
        count=0;
        for (j=0; j<MAXN; j++) {
            temp=v[j]*i+count;
            v[j]=temp%10;
            count=temp/10;
        }
    }
    for (j=MAXN; j>=0; j--) if (v[j]) break;
    for (i=j; i>=0; i--)
        cout<<v[i];
}
