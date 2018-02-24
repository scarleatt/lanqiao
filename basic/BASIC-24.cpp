#include <iostream>
using namespace std;
int main() {
    int v1, v2, t, s, l;
    cin>>v1>>v2>>t>>s>>l;
    int tdis=0, rdis=0, sec=1;
    while (tdis<l && rdis<l) {
        rdis+=v1; tdis+=v2; sec++;
        if (tdis>=l || rdis>=l) break;
        if (rdis-tdis>=t) {
            tdis+=s*v2;
            sec+=s;
        }
    }
    if (tdis>=l && rdis>=l)
        cout<<"D"<<endl;
    else if (tdis>=l)
        cout<<"T"<<endl;
    else if (rdis>=l)
       cout<<"R"<<endl;
    cout<<sec-1;
    return 0;
}
