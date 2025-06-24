#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long

int main() {
    stack<pair<ll,ll>> data;
    
    auto push = [&](ll value) {
        if (data.empty()) {
            data.push({value, value});
        } else {
            ll minim = (value < data.top().second) ? value : data.top().second;
            data.push({value, minim});
        }
    };

    auto pop = [&]() {
        if (data.empty()) {
            data.pop();
        } else {
            cout << "stack is empty.\n";
        }
    };

    auto top = [&]() -> ll {
        return data.top().second;
    };

    push(5);
    cout << endl << top();
    push(1);
    cout << top() << endl;
    // pop();
    // cout << endl << top();
    return 0;
}