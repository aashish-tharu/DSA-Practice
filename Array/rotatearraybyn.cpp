#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //rotate by n element
    //i am rotating by 3 elements
    int n=3;
    n--; 
    int s = 0; 
    while (s<n) {
        int temp = arr[s];
        arr[s] = arr[n];
        arr[n] = temp;
        s++, n--;
    }

    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    //output should be 
    // 3 2 1 4 5 6 7 8 9 10

    //reverse rest
    s=3, n=9;
    while (s<n) {
        int temp = arr[s];
        arr[s] = arr[n];
        arr[n] = temp;
        s++, n--;
    }
    
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    //output should be 
    // 3 2 1 10 9 8 7 6 5 4


    //now lets rotate entire array
    s=0, n=9;
    while (s<n) {
        int temp = arr[s];
        arr[s] = arr[n];
        arr[n] = temp;
        s++, n--;
    }

    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}