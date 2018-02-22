#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    multimap<int,int> res;
    for (int i=0; i<n; i++) {
        cin>>a;
        res.insert(make_pair(a,i));
    }
    multimap<int,int>::iterator it;
    for (it=res.begin(); it!=res.end(); it++)
        cout<<(*it).first<<" ";
}
