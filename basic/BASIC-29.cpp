#include <iostream>
#include <cstring>
using namespace std;
const int MAXN=105;
char a[MAXN]={}, b[MAXN]={};
int res[MAXN];
int main() {
    memset(res, 0, sizeof(res));
    gets(a); gets(b);
    int i=strlen(a)-1, j=strlen(b)-1, index=0, at,bt;
    int count=0;
    for (; i>=-1||j>=-1; i--,j--) {
        at=a[i]-'0'; bt=b[j]-'0';
        if (!a[i]) {
            for (; j>=0; j--,index++) {
                res[index]=((b[j]-'0')+count)%10;
                count=((b[j]-'0')+count)/10;
            }
            break;
        }
        if (!b[j]) {
            for (; i>=0; i--,index++) {
                res[index]=((a[i]-'0')+count)%10;
                count=((a[i]-'0')+count)/10;
            }
            break;
        }
        res[index]=(at+bt+count)%10;
        index++;
        count=(at+bt+count)/10;
    }
    res[index]=count;
    for (j=MAXN; j>=0; j--) if (res[j]) break;
    for (i=j; i>=0; i--) cout<<res[i];
    return 0;
}
