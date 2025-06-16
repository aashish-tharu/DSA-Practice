#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int u=0, l=0, d=0, sp=0;
    for (int i=0; i<=s.size(); i++) {
        if (s[i]>='A' && s[i]<='Z') {
            u++;
        } else if (s[i]>='a' && s[i]<='z') {
            l++;
        } else if (s[i]>='0' && s[i]<='9') {
            d++;
        } else {
            sp++;
        }
    }
    cout << u << endl << l << endl << d << endl << sp << endl;
    return 0;
}