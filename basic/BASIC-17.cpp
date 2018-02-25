#include <iostream>
using namespace std;
int a[31][31]={0};
int res[31][31]={0};
int t[31][31]={0};
int main() {
    int m,n, temp, tsum=0;
    cin>>n>>m;
    if (m==0) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i==j) {
                    cout<<1<<" "; continue;
                }
                cout<<0<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            cin>>temp;
            a[i][j]=temp; res[i][j]=temp;
        }
    while (m>1) {
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++) {
                tsum=0;
                for (int k=0; k<n; k++)
                    tsum+=res[i][k]*a[k][j];
                t[i][j]=tsum;
            }
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                res[i][j]=t[i][j];
        m--;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
