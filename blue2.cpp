#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
char s[]="314159265358979323";
int main() {
    long r; cin>>r;
    long r2 = r*r;
    int v[30];
    int i, j,n,si;
    memset(v, 0, 30*sizeof(int));
    for (i=0; r2>0;i++) {
        int m = r2%10; r2/=10;
        for (j=0,si=strlen(s)-1; si>=0; j++,si--) {
            n = m*(s[si]-'0');
            if (n>=10) {
                v[j+i+1]+=n/10;
                n%=10;
            }
            if (v[j+i]+n>=10) {
                v[j+i+1]++; v[j+i]=(v[j+i]+n)%10;
            } else {
                v[j+i] += n;
            }
        }
    }
    for (i=29; v[i]==0; i--);
    int count = 1, isdot = 0, dotcount=1,allcount=1;
    for (j=i; j>=0; j--) {
        if (dotcount==8) {
            if (v[j-1]>=5) {
                if (v[j]+1>9) {
                    while (v[j]+1>9) {
                        v[j] = (v[j]+1)%10;
                        j++;
                        v[j]++;
                    }
                } else {
                    v[j]++;
                }
            }
            break;
        }
        if (count>=(i+1-(strlen(s)-1)) && !isdot) {
            isdot=1;
        } else count++;
        if (isdot) {
            dotcount++;
        }
        allcount++;
    }
    int d=-1;
    for (j=i; j>i-allcount; j--) {
        if (d==(allcount-dotcount)) cout<<".";
        cout<<v[j];
        d++;
    }
    return 0;
}
