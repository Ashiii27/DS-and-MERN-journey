#include<iostream>
using namespace std;

void selectionSort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini])
                mini = j;
        }

        swap(arr[i], arr[mini]);
    }
}

int main() {
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "enter the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(n, arr);

    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}