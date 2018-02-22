#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<int,int> m;
    int n; cin>>n;
    int temp;
    for (int i=1; i<=n; i++) {
        cin>>temp;
        m.insert(pair<int,int>(temp, i));
    }
    int a; cin>>a;
    multimap<int,int>::iterator it;
    for (it=m.begin(); it!=m.end(); it++) {
        if (it->first==a) {
            cout<<it->second; break;
        }
    }
    if (it==m.end()) cout<<-1;
    return 0;
}
