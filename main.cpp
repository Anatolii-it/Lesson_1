#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float L = 0;
    float pi = 3.14;

    cout << "�� ������� �������� ������ ����� ���� �� �������� S=pi*R2" << endl;
    cout << "������ L �� �������� Enter" << endl;
    cin >> L;
    double R = L / (2 * pi);
    double S = pi * (R * R);
    cout << "R = L / (2 * pi) ������� ����� - " << R << endl;
    cout << "S = pi*(R*R)     ����� ������� - " << S;

    _getch();
    return 0;
}