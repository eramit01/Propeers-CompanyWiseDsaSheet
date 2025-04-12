#include<iostream>
using namespace std;

int findTheRevArr(int arr[], int start, int end) {
    int swapCount = 0;
    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        swapCount++;
    }
    return swapCount;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    
    int swapCount = findTheRevArr(arr, start, end);
    
    cout << "The reversed array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The number of swaps made is: " << swapCount << endl;
    
    return 0;
}