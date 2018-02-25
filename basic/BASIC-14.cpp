#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    int h,m,s;
    s=t%60; t=t/60;
    m=t%60;
    h=t/60;
    cout<<h<<":"<<m<<":"<<s;
    return 0;
}
