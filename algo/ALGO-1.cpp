#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int> a;
    int i=0,temp;
    while (i<n) {
        cin>>temp; a.push_back(temp);
        i++;
    }
    int m; cin>>m;
    int l,r,k;
    vector<int> s;
    while (m--) {
        cin>>l>>r>>k;
        for (i=l-1; i<r; i++) {
            s.push_back(a[i]);
        }
        sort(s.begin(), s.end());
        cout<<s[r-l+1-k]<<endl;
        s.clear();
    }

    return 0;
}
