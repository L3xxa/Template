#include <iostream>
#include <ctime>
using namespace std;

// Створення масиву
template <typename T1, typename T2>
void createArray(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

// Виведення масиву
template <typename T1, typename T2>
void print(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Сортування масиву (методом бульбашки)
template <typename T1, typename T2>
void sort(T1 *arr, T2 size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T1 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int size = 10;
    int *arr = new int[size];

    createArray(arr, size); // Створення масиву
    cout << "Array to be sorted :" << endl;
    print(arr, size); // Виведення масиву

    sort(arr, size); // Сортування масиву
    cout << "Array after sorting:" << endl;
    print(arr, size); // Виведення масиву

    delete[] arr; // Звільнення пам'яті
    return 0;
}
