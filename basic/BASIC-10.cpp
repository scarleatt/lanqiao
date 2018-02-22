nclude <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main() {
    stack<char> q;
    int n; cin>>n;
    if (n==0) {
        cout<<0; return 0;
    }
    while (n>0) {
        int yu=n%16;
        char temp;
        switch (yu){
            case 15: {
                temp='F'; break;
            }
            case 14: {
                temp='E'; break;
            }
            case 13: {
                temp='D'; break;
            }
            case 12: {
                temp = 'C';break;
            }
            case 11: {
                temp='B';break;
            }
            case 10: {
                temp='A'; break;
            }
            default: {
                temp = yu+'0'; break;
            }
        }
        q.push(temp);
        n/=16;
    }

    while (!q.empty()) {
        cout<<q.top();
        q.pop();
    }
    return 0;
}


