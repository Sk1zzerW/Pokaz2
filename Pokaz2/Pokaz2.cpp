#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int size = 5;
    int arr[] = { 1, 2, 3, 4, 5 };

    reverseArray(arr, size);

    cout << "массив с развёрнутым порядком ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
