#include <iostream>
#include <cstring>
using namespace std;

const char c[27]={
        'A','B','C','D','E',
        'F','G','H','I','G',
        'K','L','M','N','O',
        'P','Q','R','S','T',
        'U','V','W','X','Y','Z'
};
char res[27][27];
int main() {
    memset(res, '0', sizeof(res));
    int a,b; cin>>a>>b;
    for (int i=0; i<a; i++) res[i][0]=c[i];
    for (int j=0; j<b; j++) res[0][j]=c[j];

    for (int i=1; i<a; i++)
        for (int j=1; j<b; j++)
            res[i][j]=res[i-1][j-1];

    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++)
            cout<<res[i][j];
        if (i<a-1) cout<<endl;
    }
    return 0;
}
