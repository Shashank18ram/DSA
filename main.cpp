#include <bits/stdc++.h>
using namespace std;

void dosomething(int arr[] ) {
    arr[0] += 100;
    cout << "Inside Function value: " << arr[0] << endl;
}

int main() {
    const int n = 5;
    int arr[n];
    for (int i = 0; i < n; i=i+1) {
        cin >> arr[i];
        dosomething(arr);
        cout << "outside value " << arr[0] << endl;
    }
    return 0;
}