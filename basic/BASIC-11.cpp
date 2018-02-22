nclude <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[10];
    gets(s);
    long long sum=0, weight=1, temp;
    int i=strlen(s)-1;
    for (; i>=0; i--) {
       switch(s[i]) {
            case 'A':
                temp=10; break;
            case 'B':
                temp=11; break;
            case 'C':
                temp=12; break;
            case 'D':
                temp=13; break;
            case 'E':
                temp=14; break;
            case 'F':
                temp=15; break;
            default:
                temp=s[i]-'0'; break;
        }
        sum += temp*weight;
        weight*=16;
    }
    cout<<sum;
    return 0;
}
