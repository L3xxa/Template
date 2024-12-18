#include <iostream>
#include <ctime>
using namespace std;

// Створення масиву
template <typename T1, typename T2>
void createArray(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20; // Заповнюємо масив
    }
}

// Пошук середнього арифметичного
template <typename T1, typename T2>
int average(T1 *arr, T2 size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    srand(time(0));

    int *arr = new int[10];
    createArray(arr, 10); // Створення масиву

    cout << "Arithmetic average: " << average(arr, 10) << endl;

    delete[] arr;
    return 0;
}