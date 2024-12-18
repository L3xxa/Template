#include <iostream>
#include <ctime>
using namespace std;

// Створення масиву
template <typename T1, typename T2>
void createArray(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20; // Заповнюємо масив
        cout << arr[i] << " "; // Виводимо елемент
    }
    cout << endl;
}

// Знаходження крайнього лемернта
template <typename T1, typename T2>
void findIndex(T1 *arr, T2 size, int &firstIndex, int &lastIndex) {
    firstIndex = -1;
    lastIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            firstIndex = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            lastIndex = i;
            break;
        }
    }
}

// Відсотрування масиву
template <typename T1, typename T2>
void sort(T1 *arr, T2 size, int firstIndex, int lastIndex ) {
    for (int i = firstIndex + 1; i < lastIndex - 1; i++) {
        for (int j = firstIndex + 1; j < lastIndex - (i - firstIndex) - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T1 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << endl;
}

// Виведення масиву
template <typename T1, typename T2>
void print(T1 *arr, T2 size) {
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }

}

int main() {

    srand (time(0));

    int *arr = new int [20]; // Створюємо масив
    createArray(arr, 20);

    int firstIndex, lastIndex;
    findIndex(arr, 20, firstIndex, lastIndex); // Знаходимо крайні елементи
    sort(arr,20, firstIndex, lastIndex ); // Відсотрування масиву
    print(arr, 20);


    return 0;
}