// Rearrange an array.
// such that array equal [1, 2, 3, 4, 5, 6, 7, 8, 9].
// we will make even numbers in the begining of array.
// and odd numbers in the ending of array.
// Finally result, the array will be [2, 4, 6, 8, 1, 3, 5, 7, 9]

#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {

    int* temp = new int[n];
    int evenIndex = 0;
    int oddIndex = n / 2;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            temp[evenIndex] = arr[i];
            evenIndex++;
        } else {
            temp[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Deallocate memory for the temporary array
    delete[] temp;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++) {
        // Result: [2, 4, 6, 8, 1, 3, 5, 7, 9]
        cout << arr[i] << " ";
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {

    // Will create two temporary arrays for even and odd numbers
    int* evenArr = new int[n];
    int* oddArr = new int[n];

    // Initialize counters for even and odd arrays
    int evenCount = 0, oddCount = 0;

    // Separate even and odd numbers into respective arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    // Copy even and odd arrays back to the original array
    for (int i = 0; i < evenCount; i++) {
        arr[i] = evenArr[i];
    }

    for (int i = 0; i < oddCount; i++) {
        arr[evenCount + i] = oddArr[i];
    }

    // Deallocate memory for temporary arrays
    delete[] evenArr;
    delete[] oddArr;
}

int main() {

    const int size = 9;
    int arr[size] = {1, 3, 2, 4, 7, 6, 5, 8, 9};

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    rearrange(arr, size);

    cout << "\nRearranged Array: ";
    for (int i = 0; i < size; i++) {
        // Result should be [2, 4, 6, 8, 1, 3, 5, 7, 9]
        cout << arr[i] << " ";
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void rearrange(int arr[], int n) {

    int temp[n];
    int j = 0;
    int k = n - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            temp[j] = arr[i];
            j++;
        } else {
            temp[k] = arr[i];
            k--;
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++) {
        // Result: [2, 4, 6, 8, 9, 7, 5, 3, 1]
        cout << arr[i] << " ";
    }
    return 0;
}
*/
