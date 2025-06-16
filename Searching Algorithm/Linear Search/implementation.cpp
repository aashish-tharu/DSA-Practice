#include <iostream>
#include <vector>
using namespace std;

//linear search
int linearSearch(vector<int>& arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int index=linearSearch(arr, target);
    if (index == -1){
        cout << "Target not found." << endl;
    } else {
        cout << "Target found at " << index << endl;
    }
}