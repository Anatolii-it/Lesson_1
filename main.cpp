#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float r1 = 0;
    float r2 = 0;
    float r3 = 0;
    cout << "���������� �������� ����� R0 �� �������� 1/R0=1/R1+1/R2+1/R3" << endl;
    cout << "������ R1 �� �������� Enter" << endl;
    cin >> r1;
    cout << "������ R2 �� �������� Enter" << endl;
    cin >> r2;
    cout << "������ R3 �� �������� Enter" << endl;
    cin >> r3;

    double r0 = 1.0 / (1.0 / r1 + 1.0 / r2 + 1.0 / r3);
    cout << "R0 ������� - " << r0;

    _getch();
    return 0;
}