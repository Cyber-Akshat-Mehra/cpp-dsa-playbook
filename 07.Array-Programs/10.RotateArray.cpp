#include <iostream>
using namespace std;

// user-defined reverse (no built-in)
void reversePart(int arr[], int start, int end) {
    end=end-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// right rotation
void rotateRight(int arr[], int n, int k) {
    k = k % n; // avoid unnecessary cycles

    // reverse whole array
    reversePart(arr, 0, n ); //5 4 3 2 1

    // reverse first k elements
    reversePart(arr, 0, k ); // 4 5 3 2 1

    // reverse remaining elements
    reversePart(arr, k, n ); // 4 5 1 2 3
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2; // how many times you want to rotate 

    rotateRight(arr, n, k);
    // reversePart(arr,0,5);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}