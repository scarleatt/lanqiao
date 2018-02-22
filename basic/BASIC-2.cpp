#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    for (int i=0; i<32; i++) {
        int temp=i;
        for (int j=0; j<5; j++) {
            s.push(temp%2);
            temp/=2;
        }
        while (!s.empty()) {
            cout<<s.top(); s.pop();
        }
        cout<<endl;
    }
    return 0;
}
