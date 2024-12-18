#include <iostream>
#include <ctime>
using namespace std;

// Створеня масиву
template <typename T1, typename T2>
void createArray (T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        cout << rand () % 100 << " ";
    }
    cout << endl;
}

// Вивід масиву
template <typename T1, typename T2>
void print(T1 *arr, T2 size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {

    srand(time(0));
    int *arr = new int [10];
    createArray (arr, 10); // // Створеня масиву
    print (arr, 10); // Вивід масиву


    return 0;
}