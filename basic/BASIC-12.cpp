#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <cstring>
#include <queue>
using namespace std;
char s[100000+5];
const int SRC=16;
const int DES=8;
int main() {
    int n;
    cin>>n;
    getchar();
    stack<int> res;
    queue<int> er;
    while (n--) {
        gets(s);
        int sum=0, count;
        int i=strlen(s)-1;
        for (; i>=0; i--) {
            int temp;
            if (s[i]-'0'>=0 && s[i]-'0'<=9)
                temp = (s[i]-'0');
            else switch(s[i]) {
                case 'A':
                    temp=10; break;
                case 'B':
                    temp=11; break;
                case 'C':
                    temp=12; break;
                case 'D':
                    temp=13; break;
                case 'E':
                    temp=14; break;
                case 'F':
                    temp=15; break;
            }
            count=0;
            while (count<=3) {
                er.push(temp%2);
                temp/=2;
                count++;
            }
        }
        count=0;
        int tsum=0, weight=1;
        while (!er.empty()) {
            if (count%3==0 && count>0) {
                res.push(tsum);
                tsum=0; weight=1;
            }
            tsum += weight*er.front();
            er.pop(); count++; weight*=2;
        }
        res.push(tsum);

        int iszero=1;
        while (!res.empty()) {
            if (res.top()>0 && iszero) iszero=0;
            if (!iszero)
                cout<<res.top();
            res.pop();
        }
        cout<<endl;
    }
}
