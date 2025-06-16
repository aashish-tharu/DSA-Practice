#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,-4,-5,-22,-100,4,5};
    int currSum=0, maxSum=INT16_MIN;
    for(int i=0; i<10; i++){
        currSum+=arr[i];
        maxSum=max(currSum, maxSum);
        if (currSum < 0){
            currSum = 0;
        } 
    }
    cout << maxSum << endl;
}