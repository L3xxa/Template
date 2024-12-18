#include <iostream>
#include <cmath> // Для abs()
using namespace std;

// Функція для перевірки високосного року
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Функція для обчислення кількості днів з початку календаря
int totalDaysFromStart(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    for (int i = 1; i < year; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }

    totalDays += day;

    return totalDays;
}

// Функція для обчислення різниці між двома датами
int differenceInDays(int day1, int month1, int year1, int day2, int month2, int year2) {
    int totalDays1 = totalDaysFromStart(day1, month1, year1);
    int totalDays2 = totalDaysFromStart(day2, month2, year2);

    return abs(totalDays1 - totalDays2);
}

// Функція для перевірки введення дати
void inputDate(int &day, int &month, int &year) {
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    while (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1]) {
        cout << "Invalid date. Please re-enter (day month year): ";
        cin >> day >> month >> year;

        if (isLeapYear(year)) {
            daysInMonth[1] = 29;
        }
    }
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Enter the first date:\n";
    inputDate(day1, month1, year1);

    cout << "Enter the second date:\n";
    inputDate(day2, month2, year2);

    int difference = differenceInDays(day1, month1, year1, day2, month2, year2);

    cout << "Difference in days: " << difference << endl;

    return 0;
}
