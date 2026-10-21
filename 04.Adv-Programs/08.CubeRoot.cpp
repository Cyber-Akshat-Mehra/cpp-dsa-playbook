#include <iostream>
using namespace std;

int cubeRoot(int n) {
    int low = 1, high = n;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;


        if (mid <= n / mid / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    int n=3;
    cout<<cubeRoot(n);
    return 0;
}