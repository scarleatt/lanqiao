#include <iostream>
#include <cstring>
using namespace std;
void strlw(char a[]) {
    for (int i=0; i<strlen(a); i++) {
        if (a[i]>='A' && a[i]<='Z')
            a[i] -= ('A'-'a');
    }
}
int main() {
    char a[11], b[11];
    gets(a); gets(b);
    if (strlen(a)!=strlen(b)) {
        cout<<"1"; return 0;
    } else {
        if (strcmp(a, b)==0) {
            cout<<"2"; return 0;
        }
        strlw(a); strlw(b);
        if (strcmp(a, b)==0) {
            cout<<"3"; return 0;
        } else {
            cout<<"4"; return 0;
        }
    }
}
