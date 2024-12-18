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
void print_up(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Виведення масиву
template <typename T1, typename T2>
void print_down(T1 *arr, T2 size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
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
    print_up(arr, size); // Виведення масиву

    bool select = false;
    if (select) {
        sort(arr, size);
        print_down(arr, size);
    }
    else {
        sort(arr, size);
        print_up(arr, size);
    }


    delete[] arr; // Звільнення пам'яті
    return 0;
}
