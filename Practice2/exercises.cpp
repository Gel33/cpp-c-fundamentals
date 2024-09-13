//
// Created by User on 9/13/2024.
//

#include "exercises.h"
#include <iostream>

using namespace std;

int exercise1() {
    int x = -1;
    int y = 10;

    cout << x + y;
    return 0;
}
// ANSWER: B (9)

int exercise2() {
    int num1 = 13;
    int num2 = 0;
    num1 = 5;
    num2 = num1;

    cout << num1 << " " << num2;

    return 0;
}
// ANSWER: 5 5

int exercise3(int number) {
    int originalNumber{number};
    number = 2 * number;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - originalNumber;
    number = number % 3;

    return number;
}

int exercise4() {
    double num1 = 9.9;
    double num2 = 2.2;

    double result = num1 + num2;
    cout << result;
    return 0;
}

int exercise5() {
    // Store cost price and selling price
    double cost_price = 19.0;
    double selling_price = 27.0;

    double profit = selling_price - cost_price;
    cout << profit;
    return 0;
}

int exercise6() {
    double num1 = 5.6;
    double result = num1 * num1;

    cout << result;
    return 0;
}

int exercise7(int km) {
    double km_to_miles = 0.621;
    double miles = km * km_to_miles;

    cout << miles;
    return 0;
}

int exercise8(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << year << " is a leap year";
        return 0;
    } else {
        cout << year << " is not a leap year";
        return 0;
    }
}

int exercise9() {
    for (int i = 1; i < 6; i++) {
        int result = 9 * i;
        cout << "9 * " << i << " = " <<result << endl;
    }
}

int exercise10() {
    int n;
    cout << "Type a number: ";
    cin >> n;

    for (int i = 6; i < 10; i++) {
        int result = i * n;
        cout << n << " * " << i << " = " <<result << endl;
    }
    return 0;
}

int exercise11() {
    int number;
    int result = 0;
    while (true) {
        cout << "Type a number: ";
        cin >> number;
        if (number == 0) {
            cout << result << endl;
            break;
        } else if (number < 0) {
            cout << "Number was not added" << endl;
        }
        else {
            result = result + number;
            cout << result << endl;
        }
    }
    return 0;
}

int exercise12(int day_code) {
    switch (day_code) {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error";
            break;
    }
    return 0;
}

int main () {
    exercise12(0);
}