#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    if ((n%4==0 && n%100!=0) || n%400==0) {
        cout<<"yes"; return 0;
    }
    cout<<"no";
    return 0;
}
