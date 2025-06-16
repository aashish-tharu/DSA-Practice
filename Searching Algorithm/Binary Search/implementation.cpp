#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr,int high, int low, int target){
    while (low <= high){
        int mid = low + (high-low)/2;
        if (arr[mid]==target){
            return mid;
        }
        if (arr[mid] > target){
            return binarySearch(arr, mid-1, low, target);
        }
        else if (arr[mid] < target){
            return binarySearch(arr, high, mid+1, target);
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int target = 8;
    int high = arr.size()-1;
    int low = 0;
    int index = binarySearch(arr, high, low, target);
    if (index == -1){
        cout << "Target not found";
    } else {
        cout << "Target found at " << index << endl;
    }
    return 0;
}