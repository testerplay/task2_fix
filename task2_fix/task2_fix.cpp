#include <iostream>
#include <Windows.h>

using namespace std;

int calc(int x) {
    int y = (log2(abs(x)) * pow(sin(x + 35), 2)) / (pow(3, (x - 1)) * (sqrt((2 * 3.14159265358979323846 + ((1 / 2)), 3))));
    return y;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    ///Integer15.
    int number;
    cout << "Введіть тризначне число: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        // Визначаємо цифри в числі
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int units = number % 10;

        // Переставляємо цифри сотень і десятків
        //int newNumber = units + tens * 10 + hundreds * 100;
        int rev_num = 0;
        while (number > 0) {
            rev_num = rev_num * 10 + number % 10;
            number = number / 10;
        }

        cout << "Число після перестановки: " << rev_num << endl;
    }
    else {
        cout << "Введене число не є тризначним." << endl;
    }

    ///Integer17.

    int number1;

    // Введення цілого числа, більшого за 999
    cout << "Введіть ціле число, більше за 999: ";
    cin >> number1;

    if (number1 <= 999) {
        cout << "Введене число не більше за 999." << endl;
    }
    else {
        // Отримання цифри в розряді сотень
        int digit = (number1 / 100) % 10;

        cout << "Цифра в розряді сотень: " << digit << endl;
    }


    ///Integer23.

    int N;
    std::cout << "Введіть кількість секунд (N): ";
    std::cin >> N;

    // Розраховуємо кількість хвилин, що минуло з початку останньої години.
    int minutes = (N / 60) % 60;

    std::cout << "Повних хвилин, що минули з початку останньої години: " << minutes << std::endl;

    /////Boolean17.

    int number2;

    cout << "Введіть ціле додатне число: ";
    cin >> number2;

    bool isOddThreeDigit = (number2 >= 100 && number2 <= 999) && (number2 % 2 != 0);

    if (isOddThreeDigit) {
        cout << "Введене число є непарним тризначним." << endl;
    }
    else {
        cout << "Введене число не є непарним тризначним." << endl;
    }






    ////Мат. вирази 15

    cout << "y" << calc(1526) << endl;

    return 0;
}