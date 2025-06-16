// #include <iostream>
// using namespace std;

// void factor(int n);

// int main() {
//     int n;
//     cin >> n;
//     factor(n);
//     return 0;
// }

// void factor(int n) {
//     if (n == 1) return;
        
    
//         int a = 2;
//         while (a <= n) {
//             if (n % a == 0) {
//                 cout << a << endl;
//                 return factor(n / a);
//             }
//             a++;
//         }
// }


// #include <iostream>
// using namespace std;

// int power(int base, int pow);

// int main() {
//     int base, pow;
//     cin >> base >> pow;
//     int ans = power(base, pow);
//     cout << ans << endl;
//     return 0;
// }

// int power(int base, int pow) {
//     while (pow == 0) {
//         return 1;
//     }
//     return base * power(base, --pow);
// }

//wap to to printf n - 1 if number is even and n + 1 if the given no. is odd
// #include <iostream>
// using namespace std;
// void odd();
// void even();
// int a = 1;

// int main() {
//     odd();
//     return 0;

// }

// void odd() {
//     while (a <= 10) {
//         cout << a + 1 << endl;
//         a++;
//         even();
//     }
//     return ;
// }

// void even() {
//     while (a <= 10) {
//         cout << a - 1 << endl;
//         a++;
//         odd();
//     }
//     return ;
// }

//learn tair recursion
// #include <iostream>
// void tail(int n);

// int main() {
//     tail(3);
//     return 0;
// }

// void tail(int n) {
//     if (n == 0) return ;
//     tail(n - 1);
//     std::cout << n << std::endl;
// }

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int year, ans = 0;
//     cin >> year;
//     while (1) {
//         year++;
//         set<int> arr;
//         int temp = year;
//         while (temp != 0) {
//             int a = temp % 10;
//             arr.insert(a);
//             temp /= 10;
//         }
//         if (arr.size() == 4) {
//             cout << year << endl;
//             break;
//         }
//     }
//     return 0;
// }

//How can i find the len of the string
// #include <iostream>
// using namespace std;
// int main() {
//     string a = "Aashish Tharu";
//     cout << a.length() << endl;
//     return 0;
// }

//extract sub-string from the string
// #include <iostream>
// using namespace std;
// int main() {
//     string s = "aashish Tharu";
//     for (int i = 8; i <= 13; i++) {
//         cout << s[i];
//     }
//     return 0;
// }

//check if two string are equal
// #include <iostream>
// using namespace std;
// int main() {
//     string a = "aashish";
//     string b = "aashsi";
//     cout << ((a.length() == b.length()) ? "YES" : "NO") << endl;
//     return 0;
// }

//convert the string in the upper case
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     string s = "aashish";
//     transform(s.begin(), s.end(), s.begin(), ::toupper);
//     cout << s << endl;
//     return 0;
// }

//replace sub string with particular sub string
// #include <iostream>
// using namespace std;
// int main() {
//     string s = "aashish tharu";
//     string r = "uraht";
//     for (int i = 0; i < 5; i++) {
//         s[8+i] = r[i];
//     }
//     cout << s << endl;
//     return 0;
// }

//reverse of the string
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     string s = "Aashish Tharuu";
//     int end = s.length() - 1, start = 0;
//     while (start < end) {
//         swap(s[start], s[end]);
//         start++;
//         end--;
//     }
//     cout << s << endl;
//     return 0;
// }

//total no of words in a string
// #include <iostream>
// using namespace std;
// int main() {
//     string s;
//     getline(cin, s);
//     int l = s.length() -1;
//     int word = 1;
//     for (int i = 0; i <= l; i++) {
//         if (s[i] == ' ') {
//             word++;
//         }
//     }
//     cout << word << endl;
//     return 0;
// }

// convert string into array
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "My name is aashish Tharu";
//     string arr[10][10];
//     int start = 0, p = 0;
//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             start++;
//             p = 0;
//         } else {
//             arr[start][p++] = s[i];
//         }
//     }
    
//     //printing 
//     for (int i = 0; i < sizeof(s)/sizeof(s[0]); i++) {
//         cout << arr[i] << endl;
//     }
    
//     return 0;
// }

//find the repeated char from the given string
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "apple";
//     int freq[255] = {0};

//     //for finding the frequency of the each digit
//     int l = s.length();
//     for (int i = 0; i < l; i++) {
//         freq[s[i]]++;
//     }

//     //find the max repeating char 
//     char maxchar = s[0];
//     int maxfreq = freq[s[0]];
//     for (int i = 0; i < l; i++) {
//         if (freq[s[i]] > maxfreq) {
//             maxfreq = freq[s[i]];
//             maxchar = s[i];
//         }
//     }

//     //printing the max repeating char
//     cout << maxchar << endl;
//     return 0;
// }

// '#include <iostream>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     //finding the max repeating char
//     int l = s.length();
//     int freq[255] = {0};
//     for (int i = 0; i < l; i++) {
//         freq[s[i]]++;
//     }

//     //finding the max repeating char
//     char maxchar = s[0];
//     int maxfreq = freq[s[0]];
//     for (int i = 0; i <= l; i++) {
//         if (freq[s[i]] > maxfreq) {
//             maxchar = s[i];
//             maxfreq = freq[s[i]];
//         }
//     }

//     //printing max char
//     cout << maxchar << endl;
//     return 0;
// }'

//input aabbbccaa -> output a2b3c2d2
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "aabbbccdd";
//     int l = s.length();
//     int c = 1;
//     for (int i = 0; i < l; i++) {
//         if (s[i] == s[i+1]) {
//             c++;
//         } else {
//             cout << s[i] << c;
//             c = 1;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "I love coding and I hate coding";
//     string arr[10];
//     int word = 0, position = 0;
//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             word++;
//             position = 0;
//         } else {
//             arr[word][position++] = s[i];
//         }
//     }

//     //printing of the word
//     for (int i = 0; i <= word; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "My name is aashish CHaudhary";
//     string a[10][10];
//     int st = 0, p = 0;
//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             st++;
//             p = 0;
//         } else {
//             a[st][p++] = s[i];
//         }
//     }

//     //printing of the char
//     for (int i = 0; i < sizeof(a)/ sizeof(a[0]); i++) {
//         cout << a[i] << endl;
//     }

//     return 0;
// }

//another method 
// #include <iostream>
// using namespace std;

// int main() {
//     string s = "My name is aashish chaudhary";
//     string ch[10];
//     string a = "";
//     int i = 0;

//     for (char c : s) {
//         if (c == ' ') {
//             ch[i++] = a;
//             a = "";
//         } else {
//             a += c;
//         }
//     }
//     ch[i] = a;

//     for (string z : ch) {
//         if (!z.empty()) {
//         cout << z << endl;
//         }
//     }

//     return 0;
// }


//using interation
// #include <iostream>
// using namespace std;

// void reverse(string word[], int s, int l);

// int main() {
//     string s = "My name is aashish Tharu";
    
//     // Convert string into words
//     string word[10];
//     string w = "";
//     int i = 0;
//     for (char c : s) {
//         if (c == ' ') {
//             word[i] = w;
//             w = "";
//             i++;
//         } else {
//             w += c;
//         }
//     }
//     word[i] = w;
    
//     // Print the array of words
//     for (string c : word) {
//         if (!c.empty()) {
//             cout << c << endl;
//         }
//     }
    
//     // Reverse the words using iteration
//     reverse(word, 0, i ); // Pass i - 1 as the last index
    
//     // Print the reversed word array
//     cout << "\nReversed words:\n";
//     for (string c : word) {
//         if (!c.empty()) {
//             cout << c << endl;
//         }
//     }
    
//     return 0;
// }

// void reverse(string word[], int s, int l) {
//     while (s > l) {
//         swap(word[s], word[l]);
//         s++;
//         l--;
//     }
// }


//using recursion
// #include <iostream>
// using namespace std;

// void reverse(string word[], int s, int l);

// int main() {
//     string s = "My name is aashish Tharu";
    
//     // Convert string into words
//     string word[10];
//     string w = "";
//     int i = 0;
//     for (char c : s) {
//         if (c == ' ') {
//             word[i] = w;
//             w = "";
//             i++;
//         } else {
//             w += c;
//         }
//     }
//     word[i] = w;
    
//     // Print the array of words
//     for (string c : word) {
//         if (!c.empty()) {
//             cout << c << endl;
//         }
//     }
    
//     // Reverse the words using iteration
//     reverse(word, 0, i ); // Pass i - 1 as the last index
    
//     // Print the reversed word array
//     cout << "\nReversed words:\n";
//     for (string c : word) {
//         if (!c.empty()) {
//             cout << c << endl;
//         }
//     }
    
//     return 0;
// }
// void reverse(string word[], int s, int l) {
//     while (s >= l) return;
//         swap(word[s], word[l]);
//         return reverse(word, s+1, l-1);
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "aashissss";
//     int freq[256]={0};
//     for (int c : s) {
//         freq[c]++;
//     }
    
//     char fc = s[0];
//     int h = freq[0];
//     for (int i = 0; i <= 256; i++) {
//         if (freq[i] > h) {
//             h = freq[i];
//             fc = i;
//         }
//     }

//     cout << fc << endl;
    
//     // cout << highv << endl;
//     return 0;
// }

// //second highest digit
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int find(int arr[], int s, int l);
// int main() {
//     int arr[10] = {1,2,3,4,5,6,7,8,10,9};
//     int l = sizeof(arr) / sizeof(arr[0]);
//     int sh = find(arr, 0, l);
//     cout << sh << endl;
//     return 0;
// }
// int find(int arr[], int s, int l) {
//     int high = arr[0];
//     for (int i = 0; i <= l - 1; i++) {
//         if (arr[i] > high) {
//             high = arr[i];
//         }
//     }
//     int sh = arr[0];
//     for (int i = 0; i <= l - 1; i++) {
//         if (arr[i] > sh && arr[i] < high) {
//             sh = arr[i];
//         }
//     }
//     return sh;
// }


//merge two sorted array without using any extra space
// #include <iostream>
// using namespace std;
// int main() {
//     int arr1[4] = {1,3,5,7};
//     int arr2[4] = {2,4,6,8};
//     int l1 = sizeof(arr1) / sizeof(arr1[0]);
//     int l2 = sizeof(arr2) / sizeof(arr2[0]);

//     int h;
//     if (l1 > l2)
//         h = l1;
//         else
//         h = l2;

//         for (int i = 0 ; i < h -1; i++) {
            
//         }
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// string pre(vector<string> arr);
// int main() {
//     vector<string> arr = {"flower","flow","flight"};
//     string s = pre(arr);
//     cout << s << endl;
//     return 0;
// }
// string pre(vector<string> arr) {
//     int sl = arr[0].length();
//     int ll = arr[0].length();
//     string sll = arr[0];
//     string l = arr[0];
//     // cout << sl << " " << ll << " " << s << " " << l << endl;
//     for (string s : arr) {
//         if (sl > s.length()) {
//             sl = s.length();
//             sll = s;
//         }
//         if (ll < s.length()) {
//             ll = s.length();
//             l = s;
//         }
//     }

//     cout << sl << " " << sll << " " << ll << " " << l << endl;

//     //now i will be comparing the first and last digit
//     int z = sll.length() - 1;
//     string pre = "";
//     for (int i = 0; i < z; i++) {
//         if (sll[i] != l[i]) {
//             return pre;
//         } else {
//             pre += sll[i];
//         }
//     }
//     // cout << arr[0] << endl;
//     // return "aa";
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// string find(vector<string> arr);

// int main() {
//     vector<string> arr = {"flower","flow","flight"};
//     string s = find(arr);
//     cout << s << endl;
//     return 0;
// }

// string find(vector<string> arr) {
//     int i = 0;
//     string ans = "";
//     string temp = arr[0];

//     while (true) {
//         // char c = temp[i];
//         for (string s: arr) {
//             if (temp[i] != s[i]) {
//                 return ans;
//             }
//         }
//         ans += temp[i];
//         i++;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int pre(string s);
// int main() {
//     string s;
//     getline(cin, s);
//     int ans = pre(s);
//     cout << ans << endl;
//     return 0;
// }
// int pre(string s) {
//     //convert string into array
//     string w = "";
//     vector<string> words;
//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             if (!w.empty()) {
//                 words.push_back(w);
//                 w = "";
//             }
//         } else {
//             w += s[i];
//         }
//     }
//     if (!w.empty()) {
//         words.push_back(w);
//     }

//     for (string a : words) {
//         cout << a << endl;
//     }

//     int l = words.size() - 1;
//     return words[l].length();
// }

//valid palindrome
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> mergee(const vector<int>& arr1,const vector<int>& arr2);

// int main() {
//     vector<int> arr1 = {1,2,4,6,7,9};
//     vector<int> arr2 = {2,5,3,5, 4,8,12};

//     sort(arr1.begin(), arr1.end());
//     sort(arr2.begin(), arr2.end());
//     vector<int> ans = mergee(arr1, arr2);

//     for(int a : ans) {
//         cout << a << endl;
//     }

//     return 0;
// }

// vector<int> mergee(const vector<int>& arr1,const vector<int>& arr2) {
//     int i = 0, j = 0;
//     int a1 = arr1.size();
//     int a2 = arr2.size();
//     vector<int> result;
//     while (i < a1 && j < a2) {
//         if (arr1[i] < arr2[j]) {
//             result.push_back(arr1[i++]);
//         } else {
//             result.push_back(arr2[j++]);
//         }
//     }

//     while (i < a1) {
//         result.push_back(arr1[i++]);
//     }

//     while (j < a2) {
//         result.push_back(arr2[j++]);
//     }

//     return result;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     cout << s << endl;
//     string n;
//     for (char a : s) {
//         if (a >= 'a' && a <= 'z') {
//             n += a;
//         }
//     }

//     int start = 0;
//     int end = n.length()-1;
//     string reverse = n;
//     while (start < end) {
//         swap(reverse[start], reverse[end]);
//         start++;
//         end--;
//     }
//     if (reverse == n) {
//         cout << "It is palindrome string" << endl;
//     } else {
//         cout << "It is not palindrome string " << endl;
//     }
//     return 0;
// }


//pointer and reference
// #include <iostream>
// int square1(int n) {
//     std::cout << "Address of the n is " << &n << std::endl;
//     n *= n;
//     return n;
// }
// int main() {
//     int n = 1;
//     std::cout << "The address of n in main function " << &n << std::endl;
//     std::cout << square1(2);
//     return 0;
// }

//call by reference with pointer argument
// #include <iostream>
// void square2(int* n) {
//     std::cout << "The adress of n in void function is " << n << std::endl;
//     *n *= *n;
// }
// int main() {
//     int n = 2;
//     std::cout << "The adress of n in main function is " << &n << std::endl;
//     square2(&n);
//     std::cout << "The square is " << n << "\n";
//     return 0;
// }

//call by reference with reference argument
// #include <iostream>
// void one(int &n) {
//     std::cout << "The address stored in the function is " << &n << std::endl;
//     n *= n; 
// }
// int main() {
//     int n = 3;
//     std::cout << "The address of the n in main function is " << &n << "\n";
//     one(n);
//     std::cout << n << std::endl;
//     return 0;
// }

//why
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     int &p = n;
//     int *q = &n;
//     cout << &p << endl;
//     cout << *q << endl;
//     p++;
//     cout << p << endl;
//     cout << n << '\n';
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
// vector<int> ans(vector<int> arr) {
//     int digit = 0;
//     for (int a : arr) {
//         digit = digit * 10 + a;
//     }
//     digit++;
//     vector<int> result = {};
//     while (digit != 0) {
//         int r = digit % 10;
//         result.push_back(r);
//         digit /= 10;
//     }
//     int s = 0, end = result.size() - 1;
//     while (s < end) {
//         swap(result[s++], result[end--]);
//     }
//     return result;
// }
// vector<int> ans(vector<int> arr) {
//     int l = arr.size() - 1;
//     for (int i = l; i >= 0; i--) {
//         if (arr[i] < 9) {
//             arr[i]++;
//             return arr;
//         }
//         if (arr[i] == 9) {
//             arr[i] = 0;
//         }
//     }
//     arr.insert(arr.begin(), 1);
//     return arr;
// }
// int main() {
//     vector<int> arr = {9};
//     vector<int> ar = ans(arr);
//     for (int c : ar) {
//         cout << c << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void hello(int a[], int l) {
//     for (int i = 0; i < l; i++) {
//         cout << a[i] << " ";
//     }
// }
// int main() {
//     int a[5] = {1,2,3,4,5};
//     hello(a, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int findSmall(int a[], int l);
// int findLarge(int a[], int l);
// int main() {
//     int l;
//     cin >> l;
//     int a[l];
//     for (int i = 0; i < l; i++) {
//         cin >> a[i];
//     }
//     int s = findSmall(a, l);
//     int lo = findLarge(a, l);

//     if (lo > s) {
//         s = l - s;
//         cout << lo + s - 2 << endl;
//     } else {
//         s = l - s;
//         lo--;
//         cout << lo + s << endl;
//     }
//     return 0;
// }
// int findSmall(int a[], int l) {
//     int index = 0;
//     int smallv = a[0];
    
//     for (int i = 0; i < l; i++) {
//         if (smallv >= a[i]) {
//             smallv = a[i];
//             index = i;
//         }
//     }
//     return index + 1;
// }
// int findLarge(int a[], int l) {
//     int index = 0;
//     int largeV = a[0];

//     for (int i = 0; i < l; i++) {
//         if (largeV < a[i]) {
//             largeV = a[i];
//             index = i;
//         }
//     }
//     return index + 1;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int test_case;
//     cin >> test_case;
//     while (test_case--) {
//         int l;
//         cin >> l;
//         string s;
//         cin >> s;
//         int hyphen = 0;
//         int underscore = 0;
//         for (int i = 0; i < l; i++) {
//             if (s[i] == '_') {
//                 underscore++;
//             } else {
//                 hyphen++;
//             }
//         }
//         cout << underscore << " " << hyphen << endl;
//         long long ans = (1LL * hyphen * underscore * (hyphen - 1)) / 2;
//         cout << ans << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void solve() {
//     int l;
//     cin >> l;
//     string s;
//     cin >> s;

//     int hyphen = 0, underscore = 0;

//     // Count '-' and '_'
//     for (char c : s) {
//         if (c == '-') hyphen++;
//         else underscore++;
//     }

//     // Edge case: If n < 3 or one type of character is missing, answer is 0
//     if (l < 3 || hyphen == 0 || underscore == 0) {
//         cout << "0\n";
//         return;
//     }

//     // Use long long to prevent overflow
//     long long ans = (1LL * hyphen * underscore * (hyphen - 1)) / 2;
//     cout << ans << "\n";
// }

// int main() {
//     int test_case;
//     cin >> test_case;
//     while (test_case--) {
//         solve();
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void process();

// int main() {
//     int test_case;
//     cin >> test_case;
//     while (test_case--) {
//         process();
//     }
//     return 0;
// }

// void process() {
//     int c;
//     cin >> c;
//     int arr[c];
//     for (int i = 0; i < c; c++) {
//         cin >> arr[i];
//     }
    
// }

// #include <iostream>
// using namespace std;

// string find(float);
// int main() {
//     float n;
//     cin >> n;
//     string s = find(n);
//     cout << s << endl;
//     return 0;
// }

// string find(float n) {
//     cout << n << endl;
//     if (n == 0) {
//         return "YES";
//     }
//     if (n < 0) {
//         return "NO";
//     }
//     find(n/2);
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void ar(vector<int>& a, int n); 
// int countPairs(vector<int>& a, int k);

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a;
//         for (int i = 0; i < n; i++) {
//             int z;
//             cin >> z;
//             a.push_back(z);
//         }

//         ar(a, n);
//         int c = countPairs(a, k);
//         cout << c << endl;
//     }
//     return 0;
// }

// void ar(vector<int>& a, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

// int countPairs(vector<int>& a, int k) {
//     int left = 0, right = a.size() - 1;
//     int count = 0;

//     while (left < right) {
//         int sum = a[left] + a[right];
//         if (sum == k) {
//             count++;
//             left++;
//             right--;
//         } else if (sum < k) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return count;
// }

// #include <iostream>
// using namespace std;
// void fun();
// void sorting(vector<int>& arr);
// int count(vector<int>& arr, int t);
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         fun();
//     }
//     return 0;
// }
// void fun() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr;
//     for (int i = 0; i < n; i++) {
//         int t;
//         cin >> t;
//         arr.push_back(t);
//     }
//     sorting(arr);

//     //here target is k so 
//     int ans = count(arr, k);


// }
// void sorting(vector<int>& arr) {
//     int l = arr.size();
    
//     //using bubble sort
//     for (int i = 0; i < l - 1; i++) {
//         for (int j = 0; j < l - i - 1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int count(vector<int>& arr, int t) {
//     int start = 0, end = arr.size();
//     int c = 0;
//     while (start <= end) {
//         int sum = arr[start] + arr[end];
//         if (sum == t) {
//             c++;
//             start++;
//             end--;
//         } else if (sum > t) {
//             end--;
//         } else {
//             start++;
//         }
//     }
//     return c;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         int no; //no of candy
//         cin >> no;
//         int g1 = 0, g2 = 0;
//         for (int i = 0; i < no; i++) {
//             int temp;
//             cin >> temp;
//             if (temp == 1) {
//                 g1++;
//             } else {
//                 g2++;
//             }
//         }
//        if(g2%2==0){
//         if (g1 % 2 == 0) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     else{
//         g1-=2;
//         if (g1 % 2 == 0) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
        
//     }
// }
// }

// #include <iostream>
// using namespace std;

// string compute(int n);
// int main() {
//     int test;
//     cin >> test;
//     while (test--) {
//         int n;
//         cin >> n;
//         string a = compute(n);
//         cout << a << endl;
//     }
//     return 0;
// }
// string compute(int n) {
//     if (n == 1 || n == 3) {
//         return "-1";
//     }
//     string s = "";
//     if (n % 2 == 0) {
//         for (int i = 0; i < n; i++) {
//             if (i == n - 1 || i == n -2) {
//                 s.push_back('6');
//             } else {
//                 s.push_back('3');
//             }
//         }
//     } else {
//         for (int i = 0; i < n; i++) {
//             if (i == n -1 || i == n -2 || i == n -4) {
//                 s.push_back('6');
//             } else {
//                 s.push_back('3');
//             }
//         }
//     }
//     return s;
// }

// #include <iostream>
// #include <string>

// int main() {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         int n; //no of digits
//         std::cin >> n;
//         int a = n;
//         string s = std::string(n, '0');  //making string of '00000"
//         string inp;
//         std::cin >> inp;

//         vector<bool> check(n,false);
        
//         int d = 0;
//         for (char c : inp) {
//             if (c == '1') {
//                 d++;
//             }
//         }


//         if (d % 2 == 1) {
//             std::cout << "NO" << std::endl;
//         } else {
//             int co = 0, i = 0;
//             while (i < n) {
//                 if (inp[i] == '1' && s[i] == '0' && !check[i]) {
//                     s[i] = '1';
//                     check[i] = true;
//                     i++;
//                     co++;
                    
//                 }
//                 if (co == 2) {
//                     // std::cout << s << std::endl;
//                     co = 0;
//                     i = 0;
//                 } else {
//                     i++;
//                 }
//             }

//             // std::cout << s << std::endl;
//             if (s == inp) {
//                 std::cout << "YES" << std::endl;
//             } else {
//                 std::cout << "NO" << std::endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int e, c = 0;
//         cin >> e;
//         int s = 1;
//         e--;
//         while (s < e) {
//             c++;
//             s++;
//             e--;
//         }
//         cout << c << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void process(int arr[], int size);
// void moveleft(int arr[], int i);
// void moveright(int arr[], int size, int i);

// int main() {
//     int size;
//     cin >> size;
    
//     int arr[size];
//     for (int i = 0; i < size; i++) cin >> arr[i];

//     process(arr, size);

//     for (int i = 0; i < size; i++) cout << arr[i];
//     return 0;
// }

// void process(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] >= 0) moveleft(arr, i);
//         else moveright(arr, size, i);
//     }
// }

// void moveleft(int arr[], int j) {
//     for (int i = j; i >= i; i--) {
//         if (i - 1 >= 0 && arr[i - 1] <= 0) {
//             int temp = arr[i];
//             arr[i] = arr[i-1];
//             arr[i-1] = temp;
//         }
//     }
// }

// void moveright(int arr[], int size, int j) {
//     for (int i = j; i < size; i++) {
//         if (i + 1 < size && arr[i + 1] >= 0) {
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i + 1] = temp;
//         }
//     }
// }

// #include <iostream>

// int find(int arr[], int d) {
//     int c = 0;
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] == d) c++;
//     }
//     return c;
// }

// int main() {
//     int arr[10];
//     for (int i = 0; i < 10; i++) {
//         std::cin >> arr[i];
//     }
    
//     // digit to count the frequency
//     int d;
//     std::cin >> d;

//     int result = find(arr, d);
//     std::cout << result;
//     return 0;

// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;
//     string s;
//     cin >> s;
//     for (int i = 0; i < t; i++) {
//         for (int J = 0; J < n;) {
//             if (s[J] == 'B' && s[J+1] == 'G') {
//                 s[J] = 'G';
//                 s[J+1] = 'B';
//                 J += 2;
//             } else {
//                 J++;
//             }
//         }
//     }
//     cout << s << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int l = s.length();
//     int lower = 0, upper = 0;
//     for (int i = 0; i < l; i++) {
//         if (s[i] >= 'A' && s[i] <= 'Z') upper++;
//         else lower++;
//     }
//     if (upper <= lower) {
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//     } else {
//         transform(s.begin(), s.end(), s.begin(), ::toupper);
//     }
//     cout << s << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int h = 0;
//     while (n--) {
//         int a , b;
//         cin >> a >> b;
//         ans -= a;
//         ans += b;
//         if (ans > h) h = ans;
//     }
//     cout << h;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,ans = 0;
//     cin >> a >> b;
//     b = 240 - b;
//     for (int i = 1; i <= a; i++) {
//         int temp = 5 * i;
//         if (b >= temp) {
//             ans++;
//             b -= temp;
//         } else {
//             break;
//         }
//     }
//     cout << ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n, k, ans = 0;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     for (int i = 0; i < n; i++)
//         if (arr[i] >= arr[k-1] && arr[i] > 0) ans++;
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n, k, ans = 0;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);

//     for (int i = 0; i < k; i++) {
//         if (arr[i] <= k) {
//             ans = arr[i];
//         }
//     }
//     cout << (ans == 0) ? -1 : ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int f[26] = {0};
//     for (char c : s) {
//         f[c-'A']++;
//     }
//     int h = 0, hh = 0;
//     char hc = 'A', sc = 'A';
//     for (int i = 0; i < 26;i++) {
//         if (f[i] > h) {
//             hh = h;
//             h = f[i];
//             sc = hc;
//             hc = 'A' + i;
//         } else if (f[i] > hh && f[i] < h) {
//             hh = f[i];
//             sc = 'A' + i;
//         }
//     }

//     int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

//     for (int i = 0; i < n-1; i++) {
//         if (s[i] == hc && s[i+1] == sc) c1++;
//         else if (s[i] == sc && s[i+1] == hc) c2++;
//         else if (s[i] == hc && s[i+1] == hc) c3++;
//         else if (s[i] == sc && s[i+1] == sc) c4++;
//     }
//     if (c1 >= c2 && c1 >= c3 && c1 >= c4) cout << hc << sc;
//     else if (c2 >= c1 && c2 >= c3 && c2 >= c4) cout << sc << hc;
//     else if (c3 >= c1 && c3 >= c2 && c3 >= c4) cout << hc << hc;
//     else cout << sc << sc;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     long long int k, n;
//     cin >> k >> n;

//     long long int ans = k / 2, result = 0;
//     if (k % 2 == 1) ans++;

//     if (n <= ans) {
//         result = n * 2 - 1;
//     } else if (n > ans) {
//         n = n - ans;
//         result = n * 2;
//     }
//     cout << result << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int f[26] = {0};
//     for (char c : s) {
//         f[c-'A']++;
//     }
//     int h = 0, hh = 0;
//     char hc = 'A', sc = 'A';
//     for (int i = 0; i < 26;i++) {
//         if (f[i] > h) {
//             hh = h;
//             h = f[i];
//             sc = hc;
//             hc = 'A' + i;
//         } else if (f[i] > hh && f[i] < h) {
//             hh = f[i];
//             sc = 'A' + i;
//         }
//     }
 
//     int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
 
//     for (int i = 0; i < n-1; i++) {
//         if (s[i] == hc && s[i+1] == sc) c1++;
//         else if (s[i] == sc && s[i+1] == hc) c2++;
//         else if (s[i] == hc && s[i+1] == hc) c3++;
//         else if (s[i] == sc && s[i+1] == sc) c4++;
//     }

//     if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0) {
//         for (int i = 0; i < n; i++) {
//             if (s[i] == hc) {
//                 cout << hc << s[i+1];
//                 return 0;
//             }
//         }
//     }
//     else if (c1 >= c2 && c1 >= c3 && c1 >= c4) cout << hc << sc;
//     else if (c2 >= c1 && c2 >= c3 && c2 >= c4) cout << sc << hc;
//     else if (c3 >= c1 && c3 >= c2 && c3 >= c4) cout << hc << hc;
//     else cout << sc << sc;
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     int long long n;
//     cin >> n;
//     long long int arr[n];
//     long long int newarr[n];
//     for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//     for (int i = 0; i < n; i++) {
//         int index = 0;
//         int compare = arr[i];
//         map<long long int, int> ma;
//         int c = 0;
//         for (int j = 0; j < n; j++) {
//             if (compare * 2 == arr[j]) {
//                 c = 1;
//             } else if (compare / 3 == arr[j]) {
//                 c = 1;
//             }
//         }
//         if (c == 1) {
//             newarr[index++] = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++) cout << newarr[i] << " ";
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m;
//     m[1] = "My";
//     m[2] = "Name";
//     m[3] = "is";
//     for (auto x : m) {
//         cout << x.first << " " << x.second << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <map>
// using namespace std;

// int main() {
//     map<int, bool> m;
//     int n;
//     cin >> n;
//     while (n--) {
//         int temp;
//         cin >> temp;
//         m[temp] = true;
//     }

//     //finding starting value
//     int s;
//     for (auto x : m) {
//         s = x.first;
//         int temp = x.first;
//         int c = 1;
//         while (true) {
//             bool check = false;
//             if ((m.find(temp*2)) || (m.find(temp/3))) {
//                 if (m.find(temp*2)) ? temp *= 2 : temp /= 3;
//                 check = true; c++;
//             }
//             if (!check) break;   
//         }
//         if (c == n) break;  
//     }


    

// }

// #include <iostream>
// #include <map>
// #include <vector>

// int main() {
//     int n;
//     std::cin >> n;
    
//     map<long long int, bool> m;
//     while (n--) {
//         long long int temp;
//         std::cin >> temp;
//         m[temp] = true;
//     }

//     long long int start;
//     for (auto x : m) {
//         start = x.first;
//         long long int temp = x.first, c = 1;
//         while (true) {
//             bool check = false;
//             if (m.count(temp*2) || m.count(temp/3)) {
//                 c++;
//                 (m.count(temp*2))?temp*=2:temp/=3;
//                 check = true;
//             }
//             if (!check) break;
//         }
//         if (c==n) break;
//     }

//     //  std::cout << start << std::endl;

//     vector<long long int> result;
//     for (auto x : m) {
//         result.push_back(start);
//         m.erase(start);
//         if (m.count(start*2) || m.count(start/3)) {
//             if (m.count(start*2)) {
//                 result.push_back(start*2);
//                 start = start * 2;
//             } else {
//                 result.push_back(start/3);
//                 start = start / 3;
//             }
//         }
//     }

//     for (long long int ans : result)
//         cout << ans << " ";
//     return 0;
// }


// #include <iostream>
// #include <algorithm>

// int main() {
//     string s;
//     std::cin >> s;
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     string newstring = "";
//     for (char c : s) {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             continue;
//         } else {
//             newstring += c;
//         }
//     }
//     string result = "";
//     for (char c : newstring) {
//         result = result + "." + c;
//     }
//     std::cout << result;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <set>
// using namespace std;

// int main() {
// 	string s;
// 	getline(cin, s);
// 	set<char> se;
// 	for (char c : s) {
// 		if (c == '{' || c == '}' || c == ' ' || c == ',') {
// 			continue;
// 		} else {
// 			se.insert(c);
// 		}
// 	}
// 	int l = se.size();
//     cout << l << endl;
// 	return 0;
// }

#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void bubble_sort(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		bool swap = false;
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swap = true;
			}
		}
		if (!swap) {
			break;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}