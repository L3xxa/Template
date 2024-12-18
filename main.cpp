#include <iostream>
#include <ctime>
using namespace std;

// Створення масиву
template <typename T1, typename T2>
void createArray(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Заповнюємо масив
        cout << arr[i] << " "; // Виводимо елемент
    }
    cout << endl;
}

// Виведення другої половини масиву за зростанням
template <typename T1, typename T2>
void print_up(T1 *arr, T2 size) {
    for (int i = size / 2; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// Виведення першої половини масиву за спаданням
template <typename T1, typename T2>
void print_down(T1 *arr, T2 size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

// Сортування масиву
template <typename T1, typename T2>
void sort(T1 *arr, T2 size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                T1 temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main() {

    srand(time(0));
    int *arr = new int [10];
    createArray (arr, 10); // // Створеня масиву
    sort (arr, 10); // Сортування масиву
    print_down (arr, 10); // Вивід масиву
    cout << " <|>  ";
    print_up (arr, 10); // Вивід масиву

    delete[] arr;
    return 0;
}