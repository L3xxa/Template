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
// Функція, що визначає кількість додатних, від'ємних і нульових елементів
template <typename T1, typename T2>
void countElements(T1 *arr, T2 size) {
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;
}

int main() {

    srand(time (0));
    int *arr = new int[20];
    countElements(arr, 20);

    return 0;
}