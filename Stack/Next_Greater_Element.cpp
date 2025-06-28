//what i have thought

// #include <iostream>
// using namespace std;

// class next {
//     public:
//     void nextGreaterEle(int arr[], int num) {
//         for (int i=0; i<num; i++) {                   //Time com: n
//             bool found = false;
//             for (int j=i+1; j<num; j++) {            //Time com: n
//                 if (arr[i] < arr[j]) {
//                     arr[i] = arr[j];
//                     found = true;
//                     break;
//                 }
//             }
//             if (!found) {
//                 arr[i] = -1;
//             }
//         }
//     }
// };

// int main() {
//     class next n;
//     int arr[12] = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2 ,4, 6};
//     n.nextGreaterEle(arr, 12);
//     for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//Time com: O(n*n)





//optimal solution using stack
#include <iostream>
#include <stack>
using namespace std;

class next {
    public:
    void nextGreaterEle(int arr[], int size) {
        stack<int> store;
        for (int i=size-1; i>=0; i--) {                 //Time com: n
                int temp = arr[i];
                while (!store.empty() && arr[i] >= store.top()) {       
                    store.pop();
                }
                if (store.empty()) arr[i] = -1;
                else if (store.top() > arr[i]) arr[i] = store.top();
                store.push(temp); 
        }
    }
};

int main() {
    class next n;
    int arr[12] = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2 ,4, 6};
    n.nextGreaterEle(arr, 12);
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//Time com: O(2n);