#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float L = 0;
    float pi = 3.14;

    cout << "За заданою довжиной знайти площу кола за формулой S=pi*R2" << endl;
    cout << "Введіть L та натисніть Enter" << endl;
    cin >> L;
    double R = L / (2 * pi);
    double S = pi * (R * R);
    cout << "R = L / (2 * pi) визнали радіус - " << R << endl;
    cout << "S = pi*(R*R)     площа дорівнює - " << S;

    _getch();
    return 0;
}