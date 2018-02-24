#include <iostream>
#include <list>
using namespace std;
int main() {
    int n; cin>>n;
    int t;
    list<int> l;
    while (n--) {
        cin>>t; l.push_back(t);
    }
    l.sort();
    int a,b, sum=0;
    list<int>::iterator it;
    while (l.size()>1) {
        it=l.begin(); a=*it; l.pop_front();
        it=l.begin(); b=*it; l.pop_front();
        sum+=a+b;
        l.push_back(a+b);
        l.sort();
    }
    cout<<sum;
    l.clear();
    return 0;
}
