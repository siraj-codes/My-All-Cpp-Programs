#include <iostream>
using namespace std;

void bubbleSort(int*);

int main() {
    int array[10] = {13, 92, 43, 74, 35, 96, 77, 15, 12, 88};

    cout << endl << "\tIn main Unsorted array   ";
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Value number " << i + 1 << " is : " << array[i] << endl;
    }

    cout << endl << endl;
    cout << endl << "\tIn function sorted array   ";
    cout << endl;

    bubbleSort(array);

    return 0;
}

void bubbleSort(int* num) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (*(num + i) > *(num + j)) {
                int temp = *(num + i);
                *(num + i) = *(num + j);
                *(num + j) = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "Value number " << i + 1 << " is : " << *(num + i) << endl;
    }
}

