//WAP to check Balanced Parenthesis

#include <iostream>
using namespace std;
#define SIZE 1000

int i = -1;
char arr[SIZE];

char findopp(char c) {
    if (c == ')') return '(';
    if (c == '}') return '{';
    if (c == ']') return '[';
    return '-';
}

void operate(char c) {
    if (arr[i] == findopp(c)) i--;
    arr[++i] = c;
}

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        operate(c);
    }
    if (i == -1) cout << "YES";
    else cout << "NO";
    return 0;
}


//optimal or using stack funtion

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[')
            stk.push(c);
        else {
            if (stk.empty()) return false;
            char top = stk.top();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (isValid(s) ? "YES" : "NO") << endl;
}
