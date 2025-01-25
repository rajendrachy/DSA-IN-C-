#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 5}; // Initial array with 4 elements, extra space for new elements
    int n = 4;                  // Current number of elements
    int pos = 3;                // Position to insert (0-based index)
    int val = 4;                // Value to insert

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;  // Insert the new element
    n++;             // Increase the size of the array

    // Display the updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


