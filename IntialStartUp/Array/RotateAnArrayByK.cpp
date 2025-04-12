#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
 
    if (n <= 1 || k == 0) return;
    
   
    reverse(arr, 0, k - 1);
    
   
    reverse(arr, k, n - 1);
    
   
    reverse(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    
    
    rotateArray(arr, k);
    
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}