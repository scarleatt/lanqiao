#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    int n; cin>>n;
    int temp, sum=0, max=-10001, min=10001;
    while (n--) {
        cin>>temp;
        sum += temp;
        if (temp>max) max=temp;
        if (temp<min) min=temp;
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum<<endl;
    return 0;
}
