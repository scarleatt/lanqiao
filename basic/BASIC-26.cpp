#include <iostream>
#include <cstring>
using namespace std;
const char c[22][10]={
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
};
const char tens[8][10] {"zero", "ten", "twenty", "thirty", "forty", "fifty"};
int main() {
    int a,b; cin>>a>>b;
    if (a<=20) {
        for (int i=0; i<strlen(c[a]); i++)
            cout<<c[a][i];
        cout<<" ";
    } else {
        int tindex=a/10, ge=a%10;
        for (int i=0; i<strlen(tens[tindex]); i++)
            cout<<tens[tindex][i];
        cout<<" ";
        for (int i=0; i<strlen(c[ge]); i++)
            cout<<c[ge][i];
        cout<<" ";
    }
    if (b==0) {
        cout<<"o'clock"; return 0;
    }
    if (b<=20) {
        for (int i=0; i<strlen(c[b]); i++)
            cout<<c[b][i];
    } else {
        int tindex=b/10, ge=b%10;
        for (int i=0; i<strlen(tens[tindex]); i++)
            cout<<tens[tindex][i];
        cout<<" ";
        for (int i=0; i<strlen(c[ge]); i++)
            cout<<c[ge][i];
    }
    return 0;
}
